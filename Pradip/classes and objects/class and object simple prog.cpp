//class and object simple program
#include<iostream>
using namespace std;
class college{
	private:
		int age;
		char name;
	public:
		void setdata(){
			cout<<"\n Enter name of the college and its years of establishment::"<<endl;
			cin>>name>>age;
		}
		void getdata(){
			cout<<"College name:"<<name<<endl;
			cout<<"Estd:"<<age<<endl<<endl;
		}
};
int main(){
	college c1,c2,c3;
	c1.setdata();
	cout<<endl;
	c1.getdata();
	return 0;
}
