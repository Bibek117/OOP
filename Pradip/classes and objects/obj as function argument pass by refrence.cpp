//object as funtion argument
//pass by refrence
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
		void adddistance(test &d1,test &d2){   //obj passed by refrence as funtion argument
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
	d1.setdata(9,9);
	d2.setdata(5,8);
	d3.adddistance(d1,d2);
	cout<<"\nFirst distance entry:"<<endl;
	d1.display();
	cout<<"\nSecond distance entry:"<<endl;
	d2.display();
	cout<<"Total distance is:"<<endl;
	d3.display();
	return 0;
}





