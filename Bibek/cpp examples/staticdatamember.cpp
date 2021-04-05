//static data member
#include<iostream>
using namespace std;
class employee
{
    int id; //non-static
    char name[20]; //non-static
     static int count; //static data member
public:
    void getdata()
    {
        cout<<"Enter id and name:"<<endl;
        cin>>id>>name;
        count++;
    }
    void display()
    {
        cout<<"Total entries till now:"<<count<<endl;
    }
};
int employee::count= 0;
int main()
{
    employee e1,e2,e3,e4;
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e1.getdata();
    e1.display();
    e2.display();
    e2.getdata();
    e2.display();
    e3.getdata();
    e4.getdata();
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    return 0;
}
