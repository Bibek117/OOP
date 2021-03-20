//while loop
#include<iostream>
using namespace std;
int main(){
	int i=2,n;
	cout<<"\n Enter number to be checked for prime:\n";
	cin>>n;
	while(i<=n){  //while loop initialized
		if(n%i==0){
			break;  //break statement
		}
		i++;	
	}
	if(i==n){
		cout<<"\t"<<n<<"  is Prime number";
	}
	else
	cout<<"\t"<<n<<" is Prime Number";
}
