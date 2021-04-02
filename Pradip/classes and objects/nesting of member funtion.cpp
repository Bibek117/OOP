//nestlng of a member funtion
#include<iostream>
using namespace std;
class total{
	float principal,time,rate;
	float findinterest(){
		return (principal*time*rate)/100;
	}
	public:
		void setdata(float p ,float t,float r){
			principal=p;
			time=t;
			rate=r;
		}
		void display_interest(){
			cout<<"Total interest:"<<findinterest()<<endl;
		}
		float findtotal(){
			return principal + findinterest();  //nesting of a member funtion
		}
};

int main(){
	total to;
	float p,t,r,tot;
	cout<<"Enter the value of prinipal,time and rate:";
	cin>>p>>t>>r;
	to.setdata(p,t,r);
	to.display_interest();
	tot=to.findtotal();
	cout<<"Total amount:"<<tot<<endl;
	return 0;
	}
