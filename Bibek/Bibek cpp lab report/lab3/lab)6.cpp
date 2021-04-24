/*Write a program to create class Figure with dim1 and dim2 as data members and constructor to
initialize its data. Create derived class called Triangle and define a member function Area() in it
to calculate the area of triangle. Create another class called Rectangle derived from Figure and
define member function Area() to calculate the area of rectangle. Implement this program using run time polymorphism*/
//runtime polymorphism
#include<iostream>
using namespace std;
class Figure
{
    protected:  //other derived class can access this
    int dim1,dim2;
    public:
    Figure(int length_height,int width){
        dim1 = length_height;
        dim2 = width;
    }
    virtual void Area(){
      cout<<"I calculate area"<<endl;
    }
};
class Triangle:public Figure
{
    public:
    Triangle(int length_height,int width):Figure(length_height,width){}
    int total;
    void Area()
    {
        total = 0.5*(dim1*dim2);
        cout<<"The area of the triangle is "<<total<<" m^2"<<endl;
    }
};
class Rectangle: public Figure
{

    public:
    Rectangle(int length_height,int width):Figure(length_height,width){}
    int sum;
    void Area()
    {
        sum = dim1*dim2;
        cout<<"The area of rectangle is "<<sum<<" m^2"<<endl;
    }
};
int main(){
    Figure *call; //pointer object
    Triangle tri(10,10);
    Rectangle rect(4,5);
    call = &tri; //triangle obj address
    call->Area();//area of triangle
    call = &rect;//rectangle obj address
    call->Area();//area of rectangle
    return 0;

}
