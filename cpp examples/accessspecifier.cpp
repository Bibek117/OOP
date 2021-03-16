//access specifiers
#include<iostream>
using namespace std;
class check
{
private:
    int x;
public:
    int y;
    void getdata(){
    cout<<"Enter x and y:"<<endl;
    cin>>x>>y;
    }
    void display(){
    cout<<"x="<<x<<"y="<<y<<endl;
    }
};
int main()
{
    check c;
    c.getdata();
    c.display();
    cout<<"Enter value of x direct try"<<endl;
    cin>>c.x;//generates error as x is private
    cout<<"Enterr value of y direct try"<<endl;
    cin>>c.y;
    return 0;
}

