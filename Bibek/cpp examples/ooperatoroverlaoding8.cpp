//overlaoding comparision operator
#include<iostream>
using namespace std;
class compar
{
    int hours,minutes;
public:
    void getdata()
    {
        cout<<"Enter the time taken by employee to finish the work(hour and minutes):"<<endl;
        cin>>hours>>minutes;
    }
    int operator <(compar time2)
    {
       // int mins;
        minutes = hours*60+minutes;
        time2.minutes = time2.hours*60+time2.minutes;
        if(minutes<time2.minutes)
        {
            return 1;
        }else{
            return 0;
        }
    }
};
int main()
{
    compar e1,e2;
    e1.getdata();
    e2.getdata();
    if(e1<e2){
        cout<<"Employee 1 finishes work first."<<endl;
    }else{
        cout<<"Employee 2 finishes work first."<<endl;
    }
    return 0;
}
