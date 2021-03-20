//inline funtion
#include<iostream>
using namespace std;
#include<math.h>

inline int add(int a,int b){  //inline funtion declaration
	int result;
	result=pow(a,b);
	cout<<"\t"<<a<<"^"<<b<<" is:"<<result<<endl;
}
int main(){
	int p,s;
	cout<<"\n Enter the value of base and power:\n";
	cin>>p>>s;
	add(p,s);  //inline funtion call
	return 0;
}
