#include<iostream>
using namespace std;
int main(){
	
	float x;
	float sum=0;
	int i;
	cout<<"Enter any 4 numbers:";
	for(int i=1;i<5;i++){
		cin>>x;
		sum+=x;
	}
	float avg;
	avg=sum/(i-1);
	cout<<"Sum= "<<sum<<endl<<"Average= "<<avg;
	return 0;
	
}
