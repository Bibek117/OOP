//binary plus operator overloading using friend function
#include<iostream>
using namespace std;
class measurement  //use other words instead of measurement
{
    int feet,inches;
public:
    measurement(){}
    measurement(int f,int i ){
        feet = f;
        inches = i;
    }
    void display(){
        cout<<feet<<"."<<inches<<endl;
    }
    friend measurement operator +(measurement &d1,measurement &d2){
    measurement temp;
    temp.inches  = d1.inches + d2.inches;
    temp.feet = d1.feet + d2.feet + (temp.inches/12);
    temp.inches %= 12;
    return temp;
    }
};
int main(){
    measurement d1,d2,d3;
    d1 = measurement(6,11);
    d1.display();
    d2 = measurement(7,5);
    d2.display();
    std::cout<<"total measurement = "<<std::endl;
    d3 = d1+d2;
    d3.display();
    return 0;
}
