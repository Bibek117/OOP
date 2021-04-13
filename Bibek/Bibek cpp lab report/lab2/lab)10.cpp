//WAP to convert temperature in degree Fahrenheit to degree centrigrade
//method in source class
#include<iostream>
using namespace std;
class centrigrade
{
    float tempc;
    public:
    centrigrade(){}
    centrigrade(float t)
    {
        tempc = t;
    }
    void display()
    {
        cout<<"The temperature in degree centrigrade is : "<<tempc<<endl;
    }
};
class Fahrenheit
{
   float tempf;
   public:
   void getData()
   {
       cout<<"Enter the temperature in degree Fahrenheit : ";
       cin>>tempf;
   }
   operator centrigrade()
   {
       float c;
       c= (tempf-32)*5/9;
       return centrigrade(c);
   }
};
int main()
{
    Fahrenheit t1;
    centrigrade t2;
    t1.getData();
    t2 = t1;
    t2.display();
    return 0;
}