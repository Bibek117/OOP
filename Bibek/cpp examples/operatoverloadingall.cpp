#include <iostream>
#include <conio.h>

class distance
{
   int feet;
   float inches;
   public:

    distance()          //constructor1
    {feet=0;inches=0;}
    distance(int ft,float inch)       //constructor2
    {feet=ft;inches=inch;}

    void getdata()
    {   cout<<"Enter Feet and inches respectively: ";
    cin>>feet>>inches;
    }

    void display()
    { cout<<"Feet : "<<feet<<endl<<"Inches :"<<inches;}

    //Operator declaration in Class
    friend distance operator +(distance &ob1, distance &ob2);
    friend distance operator -(distance &ob1, distance &ob2);
    friend distance operator *(int d, distance &ob); //ob1= 2 * ob2
    friend int operator ==(distance &ob1, distance &ob2);
    friend int operator < (distance &ob1, distance &ob2);
    friend int operator > (distance &ob1, distance &ob2);
    friend istream & operator >> (istream &din, distance &ob3);
    friend ostream & operator << (ostream &dout, distance &ob3);
};

distance operator +(distance &ob1, distance &ob2)
{
    distance temp;
    temp.feet   = ob1.feet   + ob2.feet;
    temp.inches = ob1.inches + ob2.inches;
    if(temp.inches > 12)
    {
       temp.inches -= 12;
       temp.feet++;
    }
    return(temp);
}

distance operator -(distance &ob1, distance &ob2)
{
    distance temp;
    float ob1inch,ob2inch;
    ob1inch = (ob1.feet * 12) + ob1.inches;
    ob2inch = (ob2.feet * 12) + ob2.inches;
    temp.inches = ob1inch - ob2inch;
    temp.feet   = temp.inches/12;
    temp.inches = temp.inches - (temp.feet * 12);
    return(temp);
}

distance operator *(int d, distance &ob)
{
    distance temp;
    float i;
    temp.feet   = d * ob.feet;
    temp.inches = d * ob.inches;
    i = temp.inches/12;
    temp.feet   = temp.feet + i;
    temp.inches = temp.inches-(i*12.0);
    return(temp);
}

int operator ==(distance &ob1, distance &ob2)
{
   if(ob1.feet == ob2.feet && ob1.inches == ob2.inches)
      return(1);
   else
      return(0);
}

int operator < (distance &ob1, distance &ob2)
{
   if(ob1.feet < ob2.feet && ob1.inches < ob2.inches)
      return(1);
   else
      return(0);
}

int operator > (distance &ob1, distance &ob2)
{
   if(ob1.feet > ob2.feet && ob1.inches > ob2.inches)
      return(1);
   else
      return(0);
}

istream & operator >> (istream &din, distance &ob3)
{
    cout<<"\nEnter Data for Object3\n";
    cout<<"Enter Feet   : ";
    din>>ob3.feet;
    cout<<"Enter Inches : ";
    din>>ob3.inches;
    return(din);
}

ostream & operator << (ostream &dout, distance &ob3)
{
    dout<<"\nData of OBJECT3\n";
    dout<<"\nFeet   :"<<ob3.feet;
    dout<<"\nInches :"<<ob3.inches;
    return(dout);
}


void main()
{
  clrscr();
  distance ob1,ob2,ob3;  //Invoked constructor1

  cout<<"\n=====Enter Data for OBJECT1=====\n";
  ob1.getdata();
  cout<<"\n\n=====Enter Data for OBJECT2=====\n";
  ob2.getdata();

  int choice,data;
  while(1)
  {
   up:
   clrscr();

   cout<<"=====Display for OBJECT1=====\n";
     ob1.display();

  cout<<"\n=====Display for OBJECT2=====\n";
     ob2.display();
  cout<<endl;

    cout<<"\nChose your choice\n";
    cout<<"1)  Addition            ( + )\n";
    cout<<"2)  Subtraction         ( - )\n";
    cout<<"3)  Multiplication      ( * )\n";
    cout<<"4)  Comparision         ( == )\n";
    cout<<"5)  Comparision         ( < )\n";
    cout<<"6)  Comparision         ( > )\n";
    cout<<"7)  Input               ( >> )\n";
    cout<<"8)  Output              ( << )\n";
    cout<<"Enter your choice:-";
    cin>>choice;
    cout<<endl<<endl;
    switch(choice)
    {
       case 1 :  ob3 = ob1 + ob2;
         break;
       case 2 :  ob3 = ob1 - ob2;
         break;
       case 3 :    cout<<"\nEnter integer to be multiplied:-";
           cin>>data;
           ob3 = data * ob1;
         break;
       case 4 :  if(ob1 == ob2)
           { cout<<"\nBoth Objects are equal or same value\n";}
         else
           { cout<<"\nThey are Unequal\n";}
         getch();
         goto up;
    case 5 :  if(ob1 < ob2)
           { cout<<"\nObject1 is Less than Object2\n";}
         else
           { cout<<"\nObject2 is Less than Object1\n";}
         getch();
         goto up;
       case 6 :  if(ob1 > ob2)
           { cout<<"\nObject1 is Greater than Object2\n";}
         else
           { cout<<"\nObject2 is Greater than Object1\n";}
         getch();
         goto up;
       case 7 :  cout<<"\nInputing Data in\n";
         cin>>ob3;
         break;
       case 8 : cout<<"\nOutputing Data out\n";
        cout<<ob3;
        break;
      default :  cout<<"\n\nHave a nice day....\n";
          getch();
          goto out;
    }
    cout<<"\n\nResult in OBJECT3 as under\n";
    ob3.display();
    getch();
}
out:
}
