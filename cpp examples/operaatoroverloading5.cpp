//overloading negotion operator
#include<iostream>
using namespace std;
class graph
{
    int x,y;
public:
    void getdata(){
        cout<<"Enter x and y co-ordinate: "<<endl;
        cin>>x>>y;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    graph operator -()
    {
        graph test;
        test.x = -x;
        test.y = -y;
        return test;
    }
};
int main()
{
    graph m,n;
    m.getdata();
    cout<<"The entered co-ordinate is:"<<endl;
    m.display();
    n= -m;
    cout<<"The final co-ordinate is:"<<endl;
    n.display();
    return 0;
}
