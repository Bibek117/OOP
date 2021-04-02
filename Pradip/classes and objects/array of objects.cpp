//array of objects
#include<iostream>
using namespace std;
#define MAX 100
class rectangle{
	int length,breadth;
	public:
		void getdata(){
			cout<<"Enter length and breadth of the student:\n";
			cin>>length>>breadth;
		}
		void showdata(){
			cout<<"Length:"<<length;
			cout<<"\tBreadth:"<<breadth<<endl;
		}
};

int main(){
	rectangle s[MAX]; //array of obects created
	int n=0;
	char ans;
	do{
		cout<<"Enter the rectangle number:"<<n+1<<endl;
		s[n++].getdata();
		cout<<"Do you want to add another data(y/n)?\n";
		cin>>ans;
	}while(ans!='n');
	
	cout<<"\n Rectangle number with their length and breadth:\n";
	for(int i=0;i<n;i++){
		cout<<"\n\n Rectangle number:"<<i+1;
		s[i].showdata();
	}
	
	return 0;	
}
























