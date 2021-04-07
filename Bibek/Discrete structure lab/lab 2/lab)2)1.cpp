//Euclidean algorithm
#include <iostream>
using namespace std;
int main()
{
    int a, b ,r; /* given numbers */
    cout<<"Enter two integer numbers: "<<endl;
    cin>>a>>b;

    do{
         r = a % b;
        a = b;
        b = r;
    }while(r!=0);
    cout<<"GCD = "<<a<<endl;
    cout<<"Name: Bibek Angdembe"<<endl;
    cout<<"Roll no : 02 ";
   return 0;
}
