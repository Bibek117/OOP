//Write a program to swap two numbers of integer types and float types using single function.
//class template
#include<iostream>
using namespace std;
template<class T> //template declearation
void swap(T *x,T *y){
    T temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter any two integer to swap : ";
    cin>>a>>b;
    cout<<"Enter any two floating numbers to swap : ";
    cin>>c>>d;
    cout<<"Before swap : "<<endl;
    cout<<"a = "<<a<<"\tb = "<<b<<endl;
    cout<<"c = "<<c<<"\td = "<<d<<endl;
    swap(&a,&b);  //int swap
    swap(&c,&d);  //float swap using same function but template argument
    cout<<"After swap : "<<endl;
    cout<<"a = "<<a<<"\tb = "<<b<<endl;
    cout<<"c = "<<c<<"\td = "<<d<<endl;
    return 0;
}