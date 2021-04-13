//WAP to overload (=) assignment operator
#include<iostream>
using namespace std;
class assign
{
    int length,breadth;
    public:
    assign(){}  //default constructor
    assign(int l,int b){   //parametrized constructor
        length=l;
        breadth=b;
    }
    void operator =(assign rect){
        length=rect.length;
        breadth=rect.breadth;
    }
    void showData(){
        cout<<"Length = "<<length<<"\tBreadth = "<<breadth<<endl;
    }
};
int main(){
    assign rect1(10,34);
    assign rect2;
    cout<<"For rectangle one :"<<endl;
    rect1.showData();
    rect2 = rect1;
    cout<<"Rect1 data assigned to rect2....."<<endl;
    cout<<"For rectangle two :"<<endl;
    rect2.showData();
    return 0;
}