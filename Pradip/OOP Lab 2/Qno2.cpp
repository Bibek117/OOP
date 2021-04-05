//unaro minusv operator  overloading
#include<iostream>
using namespace std;

class negative{
	private:
		int x,y;
	public:
		void getdata(){
			cout<<"Enter the numbers to get their negative value':"<<endl;
			cin>>x>>y;
		}
		void display(){
			cout<<"Negative of enterd number are: \n";
			cout<<"x="<<x<<"\n y="<<y;
		}
		negative operator -(){  //minus operator overloading 
			negative z;
			z.x=-x;
			z.y=-y;
			return z;
		}
};

int main(){
	negative n1,n2;
	n1.getdata();
	n2=-n1;   //minus operator overloaded
	n2.display();
	return 0;
}
