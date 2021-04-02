//object as funtion argument
//pass by value
#include<iostream>
using namespace std;

class test{
	private:
		int feet,inches;
	public:
		void setdata(int f,int i){
			feet=f;
			inches=i;
		}
		void adddistance(test d1,test d2){  //object is passed by refrence as function  argument
			feet=d1.feet+d2.feet;
			inches=d1.inches+d2.inches;
			feet=feet+inches/12;
			inches=inches%12;
		}
		void display(){
			cout<<feet<<"feet"<<"."<<inches<<"inches"<<endl;
		}
};

int main(){
	test d1,d2,d3;
	d1.setdata(7,11);
	d2.setdata(15,10);
	d3.adddistance(d1,d2);
	cout<<"First distance entry:"<<endl;
	d1.display();
	cout<<"\nSecond data entry:"<<endl;
	d2.display();
	cout<<"\nTotal distance:\n";
	d3.display();
	return 0;
}
