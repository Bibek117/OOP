//WAP to convert NRS in dollar and cent.($1=85 and 100cent=$1)
//basic to object type conversion
#include<iostream>
using namespace std;
class converter
{
    int dollar;
    float cent;
    public:
    converter(int nrs)
    {
        dollar = nrs/85;
        nrs = nrs%85;
        cent = nrs *1.176470588;
    }
    void display()
    {
        cout<<"NRS converted to $ and cent : "<<endl;
        cout<<"Dollar = $"<<dollar<<"\t"<<"Cent = "<<cent<<endl;
    }
};
int main()
{
    int rupee;
    cout<<"Enter amount in Nepali currreny : ";
    cin>>rupee;
    converter convert(rupee);
    convert.display();
    return 0;
}