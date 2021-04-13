//WAP to overload logical not(!) operator
#include<iostream>
using namespace std;
class origin
{
    int x,y;
    public:
    void getData(){
        cout<<"Enter x and y co-ordinate : ";
        cin>>x>>y;
    }
    bool operator !(){
        return (x==0 && y==0);
    }
};
int main(){
    origin zero;
    zero.getData();
    if(!zero){
        cout<<"The points you entered is origin."<<endl;
    }else{
        cout<<"The points you entered is not a origin"<<endl;
    }
    return 0;
}