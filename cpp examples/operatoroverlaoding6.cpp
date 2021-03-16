//overloading assignment operator
#include<iostream>
using namespace std;
class marks
{
    int m1,m2;
public:
    marks()
    {
        m1 = 0;
        m2 = 0;
    }
    marks(int i,int j)
    {
        m1 = i;
        m2 = j;
    }
    void operator =(marks m) //u can  use & opertor infront of m also
    {
        m1 = m.m1;
        m2 = m.m2;
    }
    void display()
    {
        cout<<"Marks of first subject :"<<m1<<endl;
        cout<<"Marks of second subject:"<<m2<<endl;
    }
};
int main()
{
    marks mark1(50,48);
    marks mark2(45,48);
    cout<<"Marks of 1st student :"<<endl;
    mark1.display();
    cout<<"Marks of 2nd student :"<<endl;
    mark2.display();
    marks mcopy2;
    mcopy2 = mark2;
    cout<<"Copy of marks of 2nd student:"<<endl;
    mcopy2.display();
    return 0;
}
