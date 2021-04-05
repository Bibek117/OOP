//static fuction member
#include<iostream>
using namespace std;
class employee
{
    int id; //non-static
    char name[20]; //non-static
     static int count; //static data member
public:
    void getdata() //non-static member function
    {
        cout<<"Enter id and name:"<<endl;
        cin>>id>>name;
        count++;
    }
     static void display() //static member function
    {
        cout<<"Total entries till now:"<<count<<endl;
    }
};
int employee::count= 0; //static data function
int main()
{
    employee e1,e2,e3,e4;
    employee::display();
    e1.getdata();
    employee::display();
    e2.getdata();
    employee::display();
    e3.getdata();
    e4.getdata();
    employee::display();
    return 0;
}
