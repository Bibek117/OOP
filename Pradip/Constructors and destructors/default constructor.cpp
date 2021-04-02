//constructor-default constructor(a constructor that accepts no parameter is called default constructor)
#include<iostream>
using namespace std;
class rectangle{
	private:
		int lenght,breadth;
	public:
		rectangle(){    // default constructor created
			lenght=8;
			breadth=5;
		}
		void display(){
			cout<<"\n Length="<<lenght;
			cout<<"\n Breadth="<<breadth;
		}
};

int main(){
	rectangle r1;  //object r1
	r1.display();
	cout<<"\n----------------------\n"
	rectangle r2;  //object r2
	r2.display();
	
	return 0;
}
