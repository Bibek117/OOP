//WAP to show the order of execution of destructors in child and base class in inheritance.
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"I am grand parent and I  am called first\n";
		}
        ~A(){
            cout<<"I am grand parent but I  am destroyed last\n";
        }
};
class B:public A
{
	public:
		B()
		{
			cout<<"I am parent and I am called second\n";
		}
        ~B()
        {
            cout<<"I am parent and destroyed second\n";
        }
};
class C:public B
{
	public:
		C()
		{
			cout<<"Even though I made the call but I am child and I am called last\n";
		}
        ~C()
        {
            cout<<"CHILD: On destruction I am destroyed first \n";
        }
};
int main()
{
	C child;
	return 0;
}
