//overlaoding operator to concatenate two strings
#include<iostream>
#include<string.h>
using namespace std;
class test
{
    char *s;
    int l;
public:
    void getdata()
    {
        char str[20];
        cout<<"Enter a string:"<<endl;
        cin>>str;
        l=strlen(str);
        s = new char[l+1];
        strcpy(s,str);
    }
    void display()
    {
        cout<<s<<endl;
    }
    test operator +(test x)
    {
        test temp;
        temp.s = new char[l+x.l+1];
        strcpy(temp.s,s);
        strcat(temp.s,x.s);
        return temp;
    }
};
int main()
{
    test s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3 = s1+s2;
    cout<<"The joind stirng is :"<<endl;
    s3.display();
    return 0;
}
