//pass by value
#include<iostream>
using namespace std;
int swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int p,s;
	cout<<"\n Enter two numbers:";
	cin>>p>>s;
	cout<<"\n Before swap:\t";
	cout<<"p="<<p<<"\t s="<<s<<endl;
	swap(p,s);  //pass by vaule
	cout<<"\n\n After swap:\t"<<"p="<<p<<"\ts="<<s;
	return 0;
}
