/*9.WAP in c++  which contains a class named Box with appropriate data members and function members.
 Initialize an object of the class with parameterized constructor and
 copy this object into another object using copy constructor.*/
#include<iostream>
using namespace std;
class Box
{
    int length,breadth,height;
public:
    Box(){};
    Box(int l,int b,int h) //parametrized constructor
    {
        length = l;
        breadth = b;
        height = h;
    }
    Box(Box &b) //copy constructor
    {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }
    void showData()
    {
        cout<<"length = "<<length<<endl;
        cout<<"Breadth = "<<breadth<<endl;
        cout<<"Height = "<<height<<endl;
    }
    void volume()
    {
        cout<<"The volume of the box is : "<<(length*breadth*height)<<endl;
    }
};
int main()
{
Box b1,b2,b3;
b1 = Box(2,2,2);
b1.showData();
cout<<"Volume of box1 :"<<endl;
b1.volume();
b2 = Box(3,3,3);
cout<<"Volume of box2 : "<<endl;
b2.volume();
b3 = Box(b1); //copy constructor call
cout<<"Volume of box3 equal to box 1: "<<endl;
b3.volume();
return 0;
}
