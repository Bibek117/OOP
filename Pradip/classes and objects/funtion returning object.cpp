//function returning object-return by value
// for a function to return object it's data type should be same as the class name of the object passed 
#include<iostream>
using namespace std;

class complex{
	int real,img;
	public:
		void getdata(){
			cout<<"Enter the value of real and imaginary:"<<endl;;
			cin>>real>>img;
		}
		void display(){
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		complex addcomplex(complex c){   //data type is same as class name of object passed
			complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			return temp;    //returning object
		}
};

int main(){
	complex c1,c2,c3;
	cout<<"\nFirst data entry"<<endl;
	c1.getdata();
	cout<<"\nSecond data entry"<<endl;
	c2.getdata();
	cout<<"\n.....................\n";
	c3=c2.addcomplex(c1);
	cout<<endl;
	c3.display();
	return 0;
}










