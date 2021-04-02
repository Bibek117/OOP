//overloading '+' opertor to concatenate two string
#include<iostream>
using namespace std;
#include<string.h>

class test{
	private:
		char *s;
		int l;
	public:
		void getdata(){
			char str[30]; 
			cout<<"Enter a string:\n";
			cin>>str;
			l=strlen(str);
			s=new char[l+1];
			strcpy(s,str);
		}
		void display(){
			cout<<s<<endl;
		}
		test operator +(test x){
			test a;
			a.s=new char[l+x.l+1];
			strcpy(a.s,s);
			strcat(a.s,x.s);
			return a;
		}
	};
	
int main(){
	test s1,s2,s3;
	s1.getdata();
	s2.getdata();
	cout<<"\n Before overloading:\n";
	s1.display();
	s2.display();
	s3= s1 + s2;
	cout<<"\n After overloading:\ns3=";
	s3.display();
	
	return 0;
}
	
