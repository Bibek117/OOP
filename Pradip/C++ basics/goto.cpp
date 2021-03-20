//goto statement
#include<iostream>
using namespace std;
int main(){
	char c;
	male:cout<<"\n\n Hello sir, how you doing?";
	female:cout<<"\n\n Hello maam,how you doing?";
	cout<<"\n Enter your gender(M or F):";
	cin>>c;
	if(c=='M'){
		goto male;
	}	
	else if(c=='F'){
		goto female;
	}
	else 
	 cout<<"\n\n You entered wrong option";
}
