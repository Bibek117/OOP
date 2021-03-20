//function overloading
#include<iostream>
using namespace std;

int area(int l){
	return  l*l;
}

int area(int l,int b){
	return l*b;
}

float area(double r){
	return (22/7)*r*r;
}


int main(){
	cout<<endl;
	cout<<"\n The area of circle is:"<<area(3.3)<<endl;  //area(double r) is called 
	cout<<"\n The area of square is:"<<area(5)<<endl;  //area(int l) is called
	cout<<"\n The area of rectangle is:"<<area(7,4);  //are(int l,int b) is called
	return 0;
	
	
}
