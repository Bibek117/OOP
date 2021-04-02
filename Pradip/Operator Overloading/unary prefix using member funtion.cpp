//overloading  unary operators
//overloading pre-incremet,pre-decrement operator by using member funtion
#include<iostream>
using namespace std;

class rectangle{
	private:
		int length,breadth;
	public:
		rectangle(int l,int b){   // parametrized constructor
			length=l;
			breadth=b;
		}
		void operator ++(){
			++length;
			++breadth;
		}
		void operator --(){
			--length;
			--breadth;
		}
		
		void display(){
			cout<<"Length="<<length<<endl<<"Breadth="<<breadth<<endl;
		}
		
};

int main(){
	rectangle  r1(11,6);
	++r1;   //pre-increment operator overloading
	cout<<"After pre-increment\n";
	r1.display();
	rectangle r2(9,5);
	--r2;   //pre-decrement operator overloading
	cout<<"\n After pre decrement:\n";
	r2.display();
	
	
	return 0;
}









