//loading preincrement operator by using friend function
#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
public:
    rectangle(int l,int b){
        length = l;
        breadth = b;
   }
   friend void operator ++(rectangle &);
   void display(){
       cout<<"Length = "<<length<<endl<<"Breadth = "<<breadth<<endl;
   }
};
void  operator ++(rectangle &r){
       ++r.length;
       ++r.breadth;
}
int main(){
    rectangle r1(5,6);
    r1.display();
    ++r1;
    r1.display();
    return 0;

}
