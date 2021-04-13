//write a program to overload increment opertor in postfix notation
#include<iostream>
using namespace std;
class increment
{
    int a,b;
    public:
    void getData(){
        cout<<"Enter a and b \t";
        cin>>a>>b;
    }
    void operator ++(int){  //dummy arguement "int" for postfix
        a;
        b;
    }
    void display(){
        cout<<"The value of a and b after postfix increment : "<<a<<"\t"<<b<<endl;
    }
};
int main(){
    increment incr;
    incr.getData();
    incr++;
    incr.display(); //the value remains unchanged as first the value is assigned and incremented
    return 0;
}