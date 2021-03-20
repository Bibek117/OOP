//do while loop
#include<iostream>
using namespace std;
int main(){
	int fib1=0,fib2=1,n,i=0;
	cout<<"\n Enter the position upto where fibonacci series is to be displayed:";
	cin>>n;
	cout<<"Fibonacci series upto "<<n<<"th position is:\n";
	do{
		
		cout<<fib1<<"\t";
		fib2=fib2+fib1;
		fib1=fib2-fib1;
		i++;	
	}while(i<n);
}
