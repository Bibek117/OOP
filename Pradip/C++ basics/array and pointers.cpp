//array and pointers 
#include<iostream>
#define M 3
using namespace std;
int main(){
	int nums[M]={36,69,99};
	int *ptr;  //pointer initialized
	ptr=nums;  //array pointer
	for(int i=0;i<M;i++){
		cout<<"Value of nums["<<i<<"]is:"<<*ptr<<endl;  //array elements pointerd by pointer
		ptr++;
	}
	return 0;
}
