//Constructor
//default parameter constructor
#include<iostream>
using namespace std;
class rectangle
{
private:
    int length,breadth;
public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void display(){
    cout<<"length="<<length<<"\n"<<"breadth="<<breadth<<endl;
    }
};
int main()
{
    rectangle r1(3,4);
    r1.display();
    return 0;
}

