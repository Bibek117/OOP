//WAP to override functions read() and display() to input the data and display data provided by the user
//function overriding 
#include<iostream>
using namespace std;
class base
{
    char name[10];
    int age;
    public:
    void read()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your age : ";
        cin>>age;
    }
    void display()
    {
        cout<<"Name : "<<name<<"\n"<<"Age : "<<age<<endl;
    }
};
class child: public base 
{
    char sub[10];
    int marks;
    public:
    void read()
    {
        cout<<"Enter the subject : ";
        cin>>sub;
        cout<<"Enter the marks : ";
        cin>>marks;
    }
    void display()
    {
        cout<<"Subject : "<<sub<<"\n"<<"Marks : "<<marks<<endl;
    }
};
int main()
{
    child st;
    st.base::read(); //calling base class read from child class
    st.read();  //simple call
    cout<<"\n\n*********---------The student detail-----------**********"<<endl;
    st.base::display();
    st.display();
    return 0;
}