//this pointer
#include<iostream>
#include<String.h>
using namespace std;
class demo{
	char name[20];
	int age;
	public:
		void setdata(char name[],int age){
			strcpy(this->name,name);
			this->age=age;
			//this pointer points to the object for which 'this' funtion was called
		}
		void display(){
			cout<<"Name:"<<this->name<<endl;
			cout<<"Age:"<<this->age<<endl;
		}
		demo iselder(demo d){   //constructor 
			if(age>d.age)
				return *this;  //this pointer
				else
					return d;
		}
};

int main(){
	demo d1,d2,d;
	d1.setdata("Pradip Kunwar",21);
	d2.setdata("Shivam Khatiwada",35);
	d=d1.iselder(d2);   
	cout<<"Elder among pradip and shivam is :"<<endl;
	d.display();
	return 0;
}
