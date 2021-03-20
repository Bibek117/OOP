/*6.Define a class named complex with data members real and img.
 Use appropriate member function of the class which accepts
 two object of the class and add them.*/

 #include<iostream>
 using namespace std;
 class complex
 {
 private:
    int real,img;
 public:
    void readData()
    {
        cout<<"Enter the real and imaginary number of complex number : "<<endl;
        cin>>real>>img;
    }
    void display()
    {
        cout<<"The sum of two complex number is : "<<real<<"+"<<img<<"i"<<endl;
    }
    complex adding(complex &ob1,complex &ob2)
    {
        complex temp;
        temp.real = ob1.real + ob2.real;
        temp.img = ob1.img + ob2.img;
        return temp;
    }
 };
 int main()
 {
     complex num1,num2,sum;
     cout<<"First complex number "<<endl;
     num1.readData();
     cout<<"Second complex number "<<endl;
     num2.readData();
     sum.adding(num1,num2);
     sum.display();
     return 0;
 }
