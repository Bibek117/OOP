//else if ladder
#include<iostream>
using namespace std;
int main(){
	int gross_salary,net_salary,tax;
	cout<<"Enter gross salary:";
	cin>>gross_salary;
	if(gross_salary>40000){
		tax=(30*gross_salary)/100;
	}
	else if(gross_salary>30000 & gross_salary<=40000){
		tax=(20*gross_salary)/100;
	}
	else if(gross_salary>20000 & gross_salary<=30000){
		tax=(10*gross_salary)/100;
	}
	else
	tax=0;
	
	net_salary=gross_salary-tax;
	cout<<"Net Salary is "<<net_salary<<endl;
	cout<<"tax is "<<tax<<endl;
	return 0;	
}


