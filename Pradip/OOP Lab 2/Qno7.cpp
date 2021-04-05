//overloading '*' operator by using friend function
#include<iostream>
using namespace std;

class multiply{
	private:
		float x,y;
	public:
		void getdata(){
			cout<<"Enter first element:";
			cin>>x;
			cout<<"Enter second element:";
			cin>>y;		
		}
		friend multiply operator *(multiply ,multiply );  //friend function
		void display(){
			cout<<"x="<<x<<"\n"<<"y="<<y<<endl;
		}
	
};
multiply operator *(multiply a,multiply b){   
	multiply temp; 
	temp.x=a.x * b.x;
	temp.y=a.y * b.y;
	return temp;
}

int main(){
	multiply c1,c2,c3;
	cout<<"First class:\n";
	c1.getdata();
	cout<<"First class elements:\n";
	c1.display();
	cout<<"Second class:\n";
	c2.getdata();
	cout<<"Second class elements:\n";
	c2.display();
	c3= c1 * c2;  //operator overloaded
	cout<<"\n\n Multiplication  of  correspoding elements of both classes:\n";
	c3.display();
	
	return 0;
}





