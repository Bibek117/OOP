//refrence variable
#include<iostream>
using namespace std;
int main(){
	int a=2;
	int b=a;
	cout<<"Normal Variables:"<<endl;
	cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
	b=b+5;
	cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
	
	int x=3;
	int &y=x;
	cout<<"Refrence Variable:"<<endl;
	cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
	y=y*5;
	cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
	
}
