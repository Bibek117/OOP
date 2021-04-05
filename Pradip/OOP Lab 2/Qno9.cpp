//object to object conversion
#include<iostream>
#include<stdlib.h>
using namespace std;
class DistanceF;
class DistanceM
{
	int meter;
	float centimeter;
	public:
			DistanceM()
			{
				meter=0;
				centimeter=0;
			}
			DistanceM(int m, int cm)
			{
			meter=m;
			centimeter=cm;
			}
			void display()
			{
				cout<<meter<<"m "<<centimeter<<"cm"<<endl;
			}
};
class DistanceF
{
	int feet,inch;
	public:
		DistanceF()
			{
				feet=0;
				inch=0;
			}
		
		void getdata()
			{
				cout<<"Enter value of feet:";
				cin>>feet;
				cout<<"Enter value of inch:";
				cin>>inch;
			}
		void display()
			{
				cout<<feet<<"\'"<<inch<<"\"";
			}
		operator DistanceM(){
			int meter;
			float cmm,total_m;
			total_m=(feet+inch/12.0)/3.33;
			meter=(int)total_m;
			cmm=(total_m-meter)*100;
			return DistanceM(meter,cmm);
		}
		
};

int main()
{
	DistanceF df;
	DistanceM dm;
	df.getdata();
	dm=df;
	cout<<"The value inf Feet and Inch is:";
	df.display();
	cout<<"\n The value in meter and centimeter is :";
	dm.display();
	
	return 0;
}






