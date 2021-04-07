//Constructor
//default constructer
#include<iostream>
using namespace std;
class rectangle
{
private:
    int length,breadth;
public:
    rectangle(){
        length=4;
        breadth=5;
    }
    void display(){
    cout<<"length="<<length<<"\n"<<"breadth="<<breadth<<endl;
    }
};
int main()
{
    rectangle r1;
    r1.display();
    return 0;
}

