//loading preincrement(urnary) operator by using member function
#include<iostream>
using namespace std;
class rectangle
{
private:
    int length,breadth;
public:
    rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    void operator ++(){
        ++length;
        ++breadth;
    }
    void operator --(){
        --length;
        --breadth;
    }
    void display(){
       cout<<"Length = "<<length<<endl<<"Breadth = "<<breadth<<endl;
    }
};
int main(){
    rectangle r1(5,6);
    rectangle r2(4,7);
    r1.display();
    ++r1;
    r1.display();
    --r2;
    r2.display();
    return 0;
}
