//pointer to classes or object pointer
#include<iostream>
using namespace std;

class item{
	int code,price;
	public:
		void getdata(){
			cout<<"\n Enter the code and price of the item:"<<endl;
			cin>>code>>price;
		}
		void showdata(){
			cout<<"\n Code:"<<code<<endl;
			cout<<"Price:"<<price<<endl;
		}
};

int main(){
	item *x=new item();   //pointer object
	item b;
	x->getdata();
	b.getdata();
	cout<<"\n Display:\n";
	cout<<"Pointer object data:";
	x->showdata();
	cout<<"\nNormal object data";
	b.showdata();
	return 0;;
	
	
}
