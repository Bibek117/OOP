//degreee fahrenheit to degree centigrade
#include<iostream>
using namespace std;
class Fahrenheit
{
	private:
	float temp;
	public: 
	Fahrenheit(){
		temp=0;
	}
	Fahrenheit(float t)
	{
	temp=t;
	}
	void display(){
		cout<<"\n The temperature in fahrenheit is "<<temp;
	}
	
};
class Centigrade
{
	private:
	float temp;
	public: 
	Centigrade(){
		temp=0;
	}
	Centigrade(float t)
	{
	temp=t;
	}
	void display(){
		cout<<"\nThe temperature in centigrade is "<<temp;
	}
	operator Fahrenheit(){
		float f;
		f=1.8*temp + 32;
		return Fahrenheit(f);
	}
	
};
int main()
{

	Centigrade c1(24.5);
	Fahrenheit f;
	f=c1;
	c1.display();
	f.display();
	return 0;
}
