//parametrized constructor-the constructor that cann take argument is calleed parametrized constructor
#include<iostream>
using namespace std;
class rectangle{
	int length,breadth;
	public:
		rectangle(int l,int b){   //parametrized constructor created
			length=l;
			breadth=b;
		}
		void display(){
			cout<<"\n Length="<<length;
			cout<<"\nBreadth="<<breadth;
		}
};


int main(){
	rectangle r1(9,5);
	r1.display();
	cout<<"\n---------------------------\n";
	rectangle r2(6,3);
	r2.display();
	
	return 0;
}
