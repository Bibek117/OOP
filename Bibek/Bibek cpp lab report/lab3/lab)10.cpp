//Write a program to illustrate the use of class template with different type of members.
#include<iostream>
using namespace std;
template<class T>
class addition
{
    T num1,num2;
    T total;
    public:
    addition(T a,T b)
    {
        num1 = a;
        num2 = b;
    }
    T sum(){
        total = num1 +num2;
        cout<<"The sum  of two numbers is "<<total<<endl;
        return 0;
    }
};
int main()
{
    cout<<"For integer "<<endl;
    addition<int> sum1(56,4);
    sum1.sum();
    cout<<"For float "<<endl;
    addition<float> sum2(5.5,6.6);
    sum2.sum();
    return 0;
}