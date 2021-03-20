//recursion
#include<iostream>
using namespace std;
int facto(int n){
	if(n==0)
	return 1;
	else
	return n*facto(n-1);
}
int main(){
	int fact;
	cout<<"\nEnter the number you want factorial of:";
	cin>>fact;
	cout<<"\n The factorial of "<<fact<<" is: "<<facto(fact);
}
