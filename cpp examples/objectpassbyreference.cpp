//object as function argument
//pass by referance
#include<iostream>
using namespace std;
class measurement
{
private:
    int feet;
    int inches;
public:
    void setdata()
    {
       cout<<"Enter the length in feet and inches:"<<endl;
       cin>>feet>>inches;
    }
    void adddistance(measurement &d1,measurement &d2)
    {
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        feet=feet+inches/12;
        inches=inches%12;
    }
    void display()
    {
        cout<<"The total distance is :"<<endl;
        cout<<feet<<"."<<inches<<endl;
    }

};
int main()
{
    measurement d1,d2,d3;
    d1.setdata();
    d2.setdata();
    d3.adddistance(d1,d2);
    d3.display();
    return 0;
}
