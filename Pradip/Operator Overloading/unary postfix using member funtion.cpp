//overloading unary operators
//post-incremant and post-decrement operator overloading using memeber function
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
		void operator ++(){  //post-increment overload
		ram++;
		shyam++;
		}
		void operator --(){  //post-decrement overload
		ram--;
		shyam--;
		}
		void display(){
			cout<<"\nRam's Age:"<<ram;
			cout<<"\n Shyam's Age:"<<shyam;
		}
};

int main(){
	age a1(55,41);
	++a1;   //operator overload
	cout<<"\n After post increment:";
	a1.display();
	age a2(67,49);
	--a2;   //operator overload
	cout<<"\n\n After post decrement:";
	a2.display();
	
	
	return 0;
}







