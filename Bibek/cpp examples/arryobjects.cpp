//array of objects
#include<iostream>
using namespace std;
class student
{
 private:
    int id;
    int fees;
 public:
    void getdata()
    {
        cout<<"enter the id and fees"<<endl;
        cin>>id>>fees;
    }
    void showdata()
    {
       cout<<"ID:"<<id<<"\tfees:"<<fees<<endl;
    }
};
int main(){
  int max=100;
  student s[max];
  int n=0;
  char ans;
  do
  {

      cout<<"enter the student name:"<<n+1<<endl;
      s[n++].getdata();
      cout<<"any other entry(y/n)?:"<<endl;
      cin>>ans;
      //n++;
  }while(ans!='n');
  cout<<"\nstudent id with fees\n";
  for(int i=0;i<n;i++)
  {
      cout<<"\nstudent number is:"<<i+1;
      s[i].showdata();
  }
  return 0;
}
