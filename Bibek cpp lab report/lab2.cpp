/*2.Write a program in c++ to overload a function
    called power to calculate a^b and (a+b)^c.*/
#include<iostream>
using namespace std;
long int power(int ,int );
long int power(int ,int ,int );
int main()
{
    int num1,num2,num3;
    long int power1,power2;
    cout<<"Enter any three numbers :"<<endl;
    cin>>num1>>num2>>num3;
    power1 = power(num1,num2);
    power2 = power(num1,num2,num3);
    cout<<"The power (a^b) is : "<<power1<<endl;
    cout<<"The power (a+b)^c is : "<<power2<<endl;
    return 0;
}
long int power(int a,int b)
{
    if(b>=1){
        return a*power(a,b-1);
    }else{
        return 1;
    }
}
long int power(int a,int b,int c)
{
    if(c>=1){
        return (a+b)*power(a,b,c-1);
    }else{
        return 1;
    }
}
