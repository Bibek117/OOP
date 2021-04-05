/*4.WAP in c++ to define a class named Box which has private data
length, breadth and height & public functions ReadData() for reading data
members and Volume() to calculate volume of the box.*/

#include<iostream>
using namespace std;

class Box
{
private:
    int length,breadth,height;
public:
    void ReadData();
    int Volume()
    {
        return length*breadth*height;
    }
};
void Box::ReadData()
{
    cout<<"Enter the length, breadth, height of a box:"<<endl;
    cin>>length>>breadth>>height;
}
int main()
{
    Box b;
    b.ReadData();
    cout<<"The volume of the box is "<<b.Volume()<<endl;
    return 0;
}
