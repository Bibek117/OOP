//overloading '+' operator by using friend function
#include<iostream>
using namespace std;

class complex{
	private:
		float x,y;
	public:
		complex(){
		}
		complex(float real, float img){
			x=real;
			y=img;
		}
		friend complex operator +(complex ,complex );  //friend function
		void dispkay(){
			cout<<x<<"+"<<y<<"i"<<endl;
		}
	
};
complex operator +(complex a,complex b){
	complex temp;
	temp.x=a.x + b.x;
	temp.y=a.y+ b.y;
	return temp;
}

int main(){
	complex c1(77,13);
	complex c2(33,75);
	cout<<"First complex number:\n";
	c1.dispkay();
	cout<<"\n\n Second complex number:\n";
	c2.dispkay();
	complex c3;
	c3= c1 + c2;  //operator overloaded
	cout<<"\n\n Addition of above two complex number:\n";
	c3.dispkay();
	
	return 0;
}





