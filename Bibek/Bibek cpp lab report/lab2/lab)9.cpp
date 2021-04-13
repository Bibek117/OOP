/*WAP to create a class named DistanceF with data members: feet and inch and another class named DistanceM with data members m and cm and convert object of class DistanceF class into object of another class DistanceM. Use 1m = 3.28 feet*/
//class to class type conversion
//method in destination class
#include<iostream>
using namespace std;
class DistanceF
{
    int feet,inch;
    public:
    void getData()
    {
        cout<<"Enter length in feet and inch : ";
        cin>>feet>>inch;
    }
    int getFeet()
    {
        return feet;
    }
    int getInch()
    {
        return inch;
    }
    void display()
    {
        cout<<"Feet : "<<feet<<"\t"<<"Inch : "<<inch<<endl;
    }
};
class DistanceM
{
    int m;
    float cm;
    public:
    DistanceM(){};
    DistanceM(DistanceF len)
    {
        int f;
        float i,total;
        f=len.getFeet();
        i=len.getInch();
        total = (f+i/12)/3.28;
        m = (int)total;
        cm = (total-m)*100;
    }
    void output()
    {
        cout<<"Meter : "<<m<<"\t"<<"Centimeter : "<<cm<<endl;
    }
};
int main()
{
    DistanceF d1;
    DistanceM d2;
    d1.getData();
    d2=d1;
    cout<<"Measurement in feet and inch : "<<endl;
    d1.display();
    cout<<"Measurement in metre and cm  : "<<endl;
    d2.output();
    return 0;

}
