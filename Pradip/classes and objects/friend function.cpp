//friend funtion
#include<iostream>
using namespace std;
class sample{
	int first,second;
	public:
		void setdata(int a,int b){
			first=a;
			second=b;
		}
		friend float mean(sample s);   //friend funtion defined
};

float mean(sample s){
	return (s.first+s.second)/2;
}

int main(){
	sample s1;  //object s1 of class sample
	s1.setdata(99,69);
	cout<<"Mean value:"<<mean(s1)<<endl;   //calling of friend function
	return 0;
}
