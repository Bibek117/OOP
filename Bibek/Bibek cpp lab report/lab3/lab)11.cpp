//Write a program to illustrate nested try catch construct.
#include<iostream>
using namespace std;
int main()
{
    try{
        try{
            throw 5;
        }
        catch(int i){
           cout<<"Exception caught.Exception number : "<<i<<endl;
           throw 'i';
        }
    }
    catch(char c){
        cout<<"Character exception caught.The character is "<<c<<endl;
    }
    return 0;
}