//Constructor
//copy constructer
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
    rectangle(rectangle &s){
        length=s.length;
        breadth=s.breadth;
    }
    void display(){
    cout<<"length="<<length<<"\n"<<"breadth="<<breadth<<endl;
    }
};
int main()
{
    rectangle r1(3,4);
    r1.display();
    rectangle r2(7,6);
    r2.display();
    rectangle r3(r2);
    r3.display();
    return 0;
}

