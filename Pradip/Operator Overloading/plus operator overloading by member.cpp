//overloading + operator
#include<iostream>
using namespace std;

class complex{
	private:
		float x,y;
	public:
		complex(){
		}
		complex(float real,float img){
			x=real;
			y=img;
		}
		complex operator +(complex c){   // '+' operator overloading
			complex temp;
			temp.x=x+c.x;
			temp.y=y+c.y;
			return temp;
		}
		void display(){
			cout<<x<<"+"<<y<<"i"<<endl;
		}
};

int main(){
	complex c1(97,85);
	complex c2(23,17);
	cout<<"1st complex number:";
	c1.display();
	cout<<"\n\n 2nd complex number:";
	c2.display();
	complex c3;
	c3=c1 + c2;   // '+' operator overloaded 
	cout<<"\n\n Addition of above two complex numbers:\n";
	c3.display();
	
	
	return 0;
}
