//overloading unary operators
//post-incremant  operator in postfix notation using member function
#include<iostream>
using namespace std;

class age{
	private:
		int ram,shyam;
	public:
		age(int a,int b){
			ram=a;
			shyam=b;
		}
		void operator ++(int){  //post-increment overload
		ram++;
		shyam++;
		}
		
		void display(){
			cout<<"\nRam's Age:"<<ram;
			cout<<"\n Shyam's Age:"<<shyam;
		}
};

int main(){
	age a1(55,41);
	cout<<"Before increment:";
	a1.display();
	a1++;   //operator overload
	cout<<"\n \n After post increment:";
	a1.display();
	
	
	return 0;
}







