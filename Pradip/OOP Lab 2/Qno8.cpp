//convert Nrs in Dollar and cent
#include<iostream>
using namespace std;
class Nrs
{
	private:
	float paisa;
	int Rs;
	public: 
	Nrs(){
		Rs=0;
		paisa=0;
	}
	Nrs(int r,float p)
	{
	Rs=r;
	paisa=p;
	}
	void display(){
		cout<<"Rs."<<Rs<<" and "<<paisa<<"paisa\n";
	}
	
};
class Dollar
{
	private:
	int dol;
	float cent;
	public: 
	Dollar(){
		dol=0;
		cent=0;
	}
	Dollar(int d,float c)
	{
	dol=d;
	cent=c;
	}
	void display(){
		cout<<"$"<<dol<<" and "<<cent<<"cent";
	}
	operator Nrs(){
		int rrs;
		float total_rs,pp;
		total_rs=85*(dol+cent/100);
		rrs=(int)total_rs;
		pp=(total_rs-rrs)*100;
		return Nrs(rrs,pp);
	}
	
};
int main()
{
	Dollar dd(99,3.5);
	Nrs nrn;
	nrn=dd;
	cout<<"\nIn Dollar:";
	dd.display();
	cout<<"\n In Rupees:";
	nrn.display();
	
	return 0;
}



