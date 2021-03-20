//factorial
#include <iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }else{
    return (n*fact(n-1));
    }
};
int main(){
    int number;
    cout<<"Enter the number you want to find factorial of : "<<endl;
    cin>>number;
    cout<<"Factorial is : "<<fact(number)<<endl;
    cout<<"Name :Bibek Angdemmbe "<<endl;
    return 0;
}
