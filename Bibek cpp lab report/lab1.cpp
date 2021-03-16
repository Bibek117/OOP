/*   1.Write a program in c++ to read number of students and then marks of each student.
     Display entered marks and their average.
     Use dynamic memory allocation to reserve memory to store marks of each student.
     */
#include<iostream>
using namespace std;
int main()
{
    int no_ofstds;
    float *marks;   //pointer initialization
    float total=0,average;
    cout<<"Enter the number of students:"<<endl;
    cin>>no_ofstds;
    marks = new float[no_ofstds]; //dynamic memory allocation
    /*if marks is allocated  null it is automatically false so true is returned and block of code
    below is executed if memory allocation fails*/
    //marks = new (nothrow) float[no_ofstds] can be used to allocate memory if no space is left
    if(!marks){
        cout<<"Memory allocation failed....!"<<endl;
    }else{
    cout<<"Enter the marks of "<<no_ofstds<<" students"<<endl;
    for(int i=0;i<no_ofstds;i++)
    {
        cin>>marks[i];
        total+= marks[i];
    }
    average = total/no_ofstds;
    cout<<"Entered marks of students are :"<<endl;
    for(int i=0;i<no_ofstds;i++)
    {
        cout<<"Student "<<i+1<<"= ";
        cout<<marks[i]<<endl;
    }
    cout<<"The average marks is :"<<average<<endl;
    }
    delete []marks; //clear the allocated memory
    return 0;
}
