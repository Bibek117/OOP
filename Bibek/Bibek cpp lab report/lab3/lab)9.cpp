//Write a program to find larger integer, fractional number and character among two using function template.
#include<iostream>
using namespace std;
template<class T>
T larger(T a,T b){
    return (a>b)?a:b;
}
int main(){
    int x,y;
    float c,d;
    char m,n;
    cout<<"For integer \n";
    cout<<"Enter two integers to compare : ";
    cin>>x>>y;
    cout<<larger(x,y)<<" is larger\n\n"<<endl;
    cout<<"For float \n";
    cout<<"Enter two floating numbers to compare : ";
    cin>>c>>d;
    cout<<larger(c,d)<<" is larger\n\n"<<endl;
    cout<<"For characters \n";
    cout<<"Enter two characters to compare : ";
    cin>>m>>n;
    cout<<larger(m,n)<<" has larger ASCII value\n\n"<<endl;
    return 0;
}