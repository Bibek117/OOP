//overloading negation operator
#include<iostream>
using namespace std;

class graph{
	private:
		int x,y;
	public:
		void getdata(){
			cout<<"Enter the x-coordinate and y-coordinate:"<<endl;
			cin>>x>>y;
		}
		void display(){
			cout<<"("<<x<<","<<y<<")";
		}
		graph operator ~(){
			graph t;
			t.x=-x;
			t.y=-y;
			return t;
		}
};

int main(){
	graph p,q;
	p.getdata();
	cout<<"\n In garph p:";
	p.display();
	q=~p;
	cout<<"\n\nAfter negation:";
	cout<<"\n In garph q:";
	q.display();
	
	
	return 0;
}
