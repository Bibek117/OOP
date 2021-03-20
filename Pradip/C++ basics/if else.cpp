//if else 
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<endl;
	cout<<"Enter your age:"<<endl;
	cin>>n;
	if(n<18){
		cout<<endl<<"You can't vote kiddo";
	}
	else{
		cout<<endl<<"You can vote";
	}
	return 0;
}
