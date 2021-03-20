//use of structure
#include<iostream>
using namespace std;
struct employee{
	private:
		int eid,salary;
	public:
		void getdata(){
			cout<<"\n Enter the id and salary of the employee:";
			cin>>eid>>salary;
		}
		void display(){
			cout<<"Emp id:"<<eid<<endl;
			cout<<"Salary:"<<salary<<endl;
		}
};

int main(){
	employee emp;
	emp.getdata();
	cout<<"Employee  details:"<<endl;
	emp.display();
	
	return 0;
}
