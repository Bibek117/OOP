//break and continue
#include<iostream>
using namespace std;
int main(){
	
	for(int i=0;i<50;i++){
		if(i%2==0)
		continue;   //skips when i%2==0(i.e doesn't prints even number) and continue from next iteration
		cout<<i<<endl;
		if(i==31)
		break;   //completely stops the execution when 1=31
	}
}
