//static data member
#include<iostream>
using namespace std;

class employee{
	int id; //non-static data member
	char name[20]; //non-static  member
	static int count;  //static data member
	
	public:
		void getdata(){
			cout<<"\n Enter id and name of the employee:"<<endl;
			cin>>id>>name;
			count++;
		}
		void displaynumber(){
			cout<<"Total entries till now:"<<count<<endl;
		}
};
int employee:: count=0;

int main(){
	employee e1,e2,e3,e4;
	e1.displaynumber();
	e2.displaynumber();
	e3.displaynumber();
	e4.displaynumber();
	e1.getdata();
	e1.displaynumber();
	e2.displaynumber();
	e2.getdata();
	e2.displaynumber();
	e3.getdata();
	e4.getdata();
	e1.displaynumber();
	e2.displaynumber();
	e3.displaynumber();
}





