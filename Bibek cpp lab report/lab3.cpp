/*3.Write a program in c++ with a function named AreaOfCircle() which receives two arguments:
radius and PI. Make default argument to PI to use default value 3.14
if it is not supplied in function call otherwise use user supplied value.
    */
#include<iostream>
#include<math.h>
using namespace std;
void AreaofCircle(float radius,float PI = 3.14){   //default arguement PI
     float area;
     area = PI *pow(radius,2);
     cout<<"\t\t The area of the circle is : "<<area<<" metre sq."<<endl;
}
int main()
{
    float radius,PI;
    cout<<"Enter the radius and value of PI :"<<endl;
    cin>>radius>>PI;
    cout<<"Area when PI value is not supplied by user"<<endl;
    AreaofCircle(radius);
    cout<<"Area when PI value is given by user"<<endl;
    AreaofCircle(radius,PI);
    return 0;
}
