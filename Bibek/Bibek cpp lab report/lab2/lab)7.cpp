//WAP to overload multiply operator using friend function
#include<iostream>
using namespace std;
class product
{
    int num1,num2;
    public:
    product(){};
    product(int a,int b)
    {
        num1=a;
        num2=b;
    }
    friend product operator *(int ,product);
    void output()
    {
        cout<<"The multipied value are : "<<num1<<"\t"<<num2<<endl;
    }
};
product operator *(int num,product s){
    product temp;
    temp.num1=num*s.num1;
    temp.num2=num*s.num2;
    return temp;
}
int main()
{
    product final;
    product obj(10,20);
    final = 3 * obj;   //operator call
    final.output();
    return 0;
}