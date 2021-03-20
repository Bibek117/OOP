//macros
#include<iostream>
using namespace std;
#define sum(a,b) a+b   //macros definiotn for addition
#define prod(a,b) a*b  //macros defintion for product
int main(){
	int p,s;
	cout<<"\n Enter the value of p and s:";
	cin>>p>>s;
	cout<<"\n"<<p<<"*"<<s<<"="<<prod(p,s)<<endl;
	cout<<"\n"<<p<<"+"<<s<<"="<<sum(p,s)<<endl;
	
}
