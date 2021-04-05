//overloading assignment operator by member funtion
#include<iostream>
using namespace std;

class marks{
	int m1,m2;
	public:
		marks(){   //default constructor
			m1=0;
			m2=0;
		}
		marks(int i,int j){   //paramterized constructor
			m1=i;
			m2=j;
		}
		void operator =(marks m){   //assignment operator overloading
			m1=m.m1;
			m2=m.m2;
		}
		void display(){
			cout<<"In first subject:"<<m1<<endl;
			cout<<"In second subject:"<<m2<<endl;
		}
		
};

int main(){
	marks marks1(77,88);
	marks marks2(90,95);
	cout<<"Marks of 1st student:\n";
	marks1.display();
	cout<<"\n\n Marks of second student:\n";
	marks2.display();
	marks copy;
	copy=marks1;   //operator overloaded
	cout<<"\n\n---------copying marks----------------\n";
	cout<<"Copied marsk of first student:\n";
	copy.display();
}
