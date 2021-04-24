//Write a program for handling exception when a number is divided by zero.
#include<iostream>
using namespace std;
void divide(int x,int y){
    try{
        if(y==0){
            throw y;
        }else{
            cout<<"The result of division(a/b) is "<<x/y<<endl;
        }
    }
    catch(int num)
    {
        cout<<"Exception caught.The divisor is "<<num<<endl;
        cout<<"Numbers cannot be divided by zero!!";
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter dividend and divisor : ";
    cin>>num1>>num2;
    divide(num1,num2);
    return 0;
}