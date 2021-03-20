//pointers in C++
#include<iostream>
using namespace std;
int main(){
	
	int p=99;
	int *ptr=&p;
	
	cout<<"Value of variable:"<<p<<endl;
	cout<<"Value of pointer:"<<ptr<<endl;
	cout<<"Value stored in pointer ptr:"<<*ptr;
	return 0;
}
