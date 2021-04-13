//WAP to overload unary minus using member function
#include<iostream>
using namespace std;
class exchange
{
    int x,y;
    public:
    void get(){
        cout<<"Input x and y ";
        cin>>x>>y;
    }
    //opertor over loading
    exchange operator -(){
        exchange temp; //since using member function no arguement needed for unary operators
        temp.x=-x;
        temp.y=-y;
        return temp;
    }
    void display(){
        cout<<"The value of x after undergoing unary minus is "<<this->x<<endl;
        cout<<"The value of y after undergoing unary minus is "<<y<<endl;
    }
};
int main(){
    exchange value,value2;
    value.get();
    value2=-value; //unary operator call
    value2.display();
    return 0;
}