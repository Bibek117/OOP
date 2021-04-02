//destructor 
#include<iostream>
#include<conio.h>
using namespace std;

class test{
	int *a;
	public:
		test(int size){
			a= new int(size);
			cout<<"\n\n Constructor Msg: Integer array of size "<<size<<"created..";
		}
		~test(){
			delete a;
			cout<<"\n\n Destructor Msg: Freed up the memory alloacted for integer array";
		}
};

int main(){
	int s;
	cout<<"Enter the size of the array:";
	cin>>s;
	cout<<"\n\n Creating an object of test class...";
	test T(s);
	cout<<"\n\n Press any key to end the program..";
	getch();

	return 0;
}
