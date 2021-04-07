/*7.WAP in c++ which has two classes: Academic and ExtraActivities which
have own data members to store academic and extra activities marks respectively.
 Define independent function which calculates total marks.*/
 #include<iostream>
 using namespace std;
 class ExtraActivities;  //forward declaration as it must be used before its actual definitation
 class Academic
 {
     int academic_marks;
 public:
    Academic()
    {
        academic_marks = 55;
    }
    friend void Total(Academic , ExtraActivities ); //friend function friendly to both classes
 };
 class ExtraActivities
 {
     int extra_marks;
 public:
    ExtraActivities()
    {
        extra_marks = 30;
    }
    friend void Total(Academic ,ExtraActivities ); //friend function declearation
 };
 void Total(Academic mark1,ExtraActivities mark2)
 {
     int total;
     total = mark1.academic_marks + mark2.extra_marks;
     cout<<"The total marks is : "<<total;
 }
 int main()
 {
     Academic m1;
     ExtraActivities m2;
     Total(m1,m2);
     return 0;
 }

