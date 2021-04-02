//copy constructor-(A copy constructor takes a refrence to an object of the same class as itself aas an argument)
#include<iostream>
using namespace std;

class rectangle{
	private:
		int length,breadth;
	public:
		rectangle(int l,int b){
			length=l;
			breadth=b;
		}
		rectangle(rectangle &s){  //copy constructor  --for copy construcor return type should be same as class name which it is copying
			length=s.length;
			breadth=s.breadth;
		}
		~rectangle(){   //destructor
			cout<<"Memory deallocated"<<endl;
			cout<<"Lenght="<<length<<endl;
			cout<<"Breadth="<<breadth<<endl;
		}
		void display(){
			cout<<"Length="<<length<<endl<<"Breadth="<<breadth<<endl;
		}
};

int main(){
	rectangle r1(3,4);
	r1.display();
	rectangle r2(7,5);
	r2.display();
	rectangle r3(r2);   //copy constructor called
	r3.display();
	
	return 0;
}













