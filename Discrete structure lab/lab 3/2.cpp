//compuate b^n mod m
#include<iostream>
using namespace std;
int power(int b,unsigned int n,int m){
    int res = 1;  //initialize result
    b = b%m;  //update b if it is more than or equal to m
    while(n>0){
        //if n is odd, multiply b with result
        if(n&1)
            res = (res*b)%m;
        //n  must be even now
        n=n>>1;  //y=y/2
        b= (b*b)%m;
    }
    return res;
}
int main(){
    int b,n,m,result;
    //Enter the value of b,n,m
    cout<<"Enter the positive integer b:"<<endl;
    cin>>b;
    cout<<"Enter the positive integer n:"<<endl;
    cin>>n;
    cout<<"Enter the positive integer m:"<<endl;
    cin>>m;
    //calculate the ressult
    result = power(b,n,m);
    cout<<"Modulo power is :"<<result<<endl;
    return 0;
}


