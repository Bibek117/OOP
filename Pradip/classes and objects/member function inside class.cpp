//defining member funtion inside class
#include<iostream>
using namespace std;

class rectangle{
	int length,breadth;   //private by default
	public:
		void setdata(int l,int b){
			length=l;
			breadth=b;
		}
		void showdata(){
			cout<<"\n Length="<<length<<endl;
			cout<<"Breadth="<<breadth<<endl;
		}
};

int main(){
	rectangle r;   //object r created for class rectangle
	r.setdata(9,6); 
	r.showdata();
	
	
	return 0;
}
