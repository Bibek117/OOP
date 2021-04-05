//C++ program for unary logical NOT (!) operator overloading.
 
#include<iostream>
using namespace std;
 
class coordinate{
    private:
        int x,y;
         
    public:
        coordinate()   //default constructor
        {
            x=0;
            y=0;
        }
        coordinate(int x,int y)  //parametrized constructor
        {
            this->x=x;  //this pointer
            this->y=y;  //this pointer
        }
        void get_point(){
        	cout<<"Enter x and y coorinate repsectively:";
        	cin>>x>>y;
		}
		int operator !(){
				if(x==0 && y==0)
				return 1;
				else
				return 0;
		}
		void display(){
			cout<<"The coordinate is:("<<x<<","<<y<<")";
		}
};
int main()
{
   coordinate cr;
   cr.get_point();
   if(!cr)
   	cout<<"The point is origin\n";
   	else
   	cout<<"The point is not origin\n";
   	cr.display();
}




