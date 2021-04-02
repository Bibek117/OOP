//unary pre-increment decrement operator  overlaodung using friend function
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
		friend void operator ++(rectangle &p);
		friend void operator --(rectangle &s);
		void display(){
			cout<<"\n Length="<<length<<endl;
			cout<<"Breadth="<<breadth<<endl;
		}
};

void operator ++(rectangle &p){
	++p.length;
	++p.breadth;
}

void operator --(rectangle &s){
	--s.length;
	--s.breadth;
}

int main(){
	rectangle r(99,77);
	--r;
	cout<<"Rectangle info:\n\n";
	cout<<"After pre decrement:";
	r.display();
	 
	rectangle r1(87,45);
	++r1;
	cout<<"\n\nAfter pre-increment:";
	r1.display();
	return 0;
}








