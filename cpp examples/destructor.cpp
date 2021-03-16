//Constructor
//copy constructer
//default parameter constructor
#include<iostream>
using namespace std;
class rectangle
{
private:
    int length,breadth,height;
public:
    rectangle(int l,int b,int h=10)
    {
        length=l;
        breadth=b;
        height=h;
    }
    ~rectangle(){
    cout<<"deallocate"<<endl;
    };
    void display(){
    cout<<"length="<<length<<"\n"<<"breadth="<<breadth<<"\n"<<"heigth="<<height<<endl;
    }
};
int main()
{
    rectangle r1(3,4);
    r1.display();
    rectangle r2(5,6,7);
    r2.display();
    return 0;
}

