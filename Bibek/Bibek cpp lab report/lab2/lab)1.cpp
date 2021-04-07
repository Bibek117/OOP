//WAP to illustrate the use of this pointer

#include<iostream>
#include<string.h>
using namespace std;
class result
{
  private:
      char subject[20];
      int marks;
  public:
      result(){};
    result(char sub[],int mark)
    {
       strcpy(this->subject,sub);    //this pointer accesser
       this->marks=mark;
    }
    void showdata();
    result isGreater(result sub1){    //function taking object arguement with return type object
      if(this->marks>sub1.marks){
        return *this;  //returns the calling object here d1
      }else{
        return sub1;
      }
    }
};
void result::showdata(){
  cout<<"Subject : "<<this->subject<<endl;
  cout<<"Marks : "<<this->marks<<endl;
}
int main(){
  result m1("CPP",45);
  m1.showdata();
  result m2("Computer",50);
  m2.showdata();
  result m3;
  m3=m1.isGreater(m2);  //fuction call returning object
  cout<<"You have scored higher marks in :"<<endl;
  m3.showdata();
  return  0;
}
