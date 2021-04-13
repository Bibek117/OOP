//WAP to show the effect when base class has constructor and derived class has no any constructor
#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"This is base class constructor...."<<endl;
    }
};
class derived : public base
{
    public:
    void info()
    {
        cout<<"I am derived class";
    }
};
int main()
{
    derived d; //base call constructor is called even though derived class has no any constructor when object of derived class is created
    d.info();
    return 0;
}