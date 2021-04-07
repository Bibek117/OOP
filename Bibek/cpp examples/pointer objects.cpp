//pointer objects
#include<iostream>
using namespace std;
class item
{
     int code, price;
     public:
     void getdata()
     {
       cout<<"enter the code and price of the item"<<endl;
       cin>>code>>price;
     }
     void setdata()
     {
       cout<<"code="<<code<<endl<<"price="<<price<<endl;
     }
};
int main(){
  item *x= new item();//pointer object
  item b;//normal object
  x->getdata();
  b.getdata();
  cout<<"pointer obbject data"<<endl;
  x->setdata();
  cout<<"normal object data"<<endl;
  b.setdata();
  return 0;

}
