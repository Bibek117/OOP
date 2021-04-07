//nesting of member function
#include<iostream>
using namespace std;
class total
{
private:
    float principal,time,rate;
    float interest()
    {
        return principal*time*rate/100;
    }
public:
    void setdata(float p,float t,float r)
    {
        principal=p;
        time=t;
        rate=r;
    }
    void display_interest()
    {
        cout<<"Total interest="<<interest()<<endl;
    }
    float findtotal()
    {
        return principal+interest();
    }
};
int main(){
float p,t,r,a;
total ta;
cout<<"Enter the principal,time,rate:"<<endl;
cin>>p>>t>>r;
ta.setdata(p,t,r);
ta.display_interest();
a=ta.findtotal();
cout<<"Total amount="<<a<<endl;
return 0;
}
