//compute a^n
#include<iostream>
using namespace std;
int power(int a,int b){
    if(b!=0){
        return (a*power(a,b-1));
    }else{
    return 1;
    };
};
int main(){
    int base,powe,total;
    cout<<"Enter the base and power:"<<endl;
    cin>>base>>powe;
    total = power(base,powe);
    cout<<"The result is :"<<total<<endl;
    return 0;
}
