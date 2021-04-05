#include<iostream>
using namespace std;
class rectangle
{
private:
int length,breadth;
public:
void setdata(int l,int b)
{
length=l;
breadth=b;
}
void showdata();
int findarea();
int findperimeter();
};
void rectangle::showdata()
{
  cout<<"length="<<length<<endl<<"breadth="<<breadth<<endl;
}
int rectangle::findarea()
{
return length*breadth;
}
int rectangle::findperimeter()
{
return 2*(length*breadth);
}
int main(){
rectangle r;
r.setdata(3,4);
r.showdata();
cout<<"area="<<r.findarea()<<endl<<"perimeter="<<r.findperimeter()<<endl;
return 0;
}
