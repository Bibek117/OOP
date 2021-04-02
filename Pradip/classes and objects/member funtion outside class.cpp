//member funtion outside class using scope resolution operator 
#include<iostream>
using namespace std;

class rectangle{
	private:
		int length,breadth;
	public:
		void setdata(int l,int b){
			length=l;
			breadth=b;
		}
		int findarea();
		int findperimeter();
		void showdata();
};

void rectangle::showdata(){    //member funtion outside class using scope resolution operator '::'
	cout<<"Length:"<<length<<endl;
	cout<<"Breadth:"<<breadth<<endl;
}
int rectangle::findarea(){   //member funtion outside class using scope resolution operator '::'
	return length*breadth;
}
int rectangle::findperimeter(){    //member funtion outside class using scope resolution operator '::'
	return 2*(length+breadth);
}

int main(){
	rectangle r;
	r.setdata(7,4);
	r.showdata();
	cout<<"Area:"<<r.findarea()<<endl;
	cout<<"Perimeter:"<<r.findperimeter()<<endl;
	return 0 ;
}











