//switch
#include<iostream>
using namespace std;
int main(){
	int day;
	cout<<endl;
	cout<<"Enter day of the week indicated by number(1 to 7):";
	cin>>day;
	cout<<endl;
	switch(day){    //switch initailized
		case 1:
			cout<<"Sunday";
			break;
		case 2:
		 cout<<"Monday";
		 break;
		case 3:
		 cout<<"Tuesday";
		 break;
		case 4:
		 cout<<"Wednesday";
		 break;
		case 5:
		 cout<<"Thursday";
		 break;
		case 6:
		 cout<<"Friday";
		 break;
		case 7:
		 cout<<"Saturday";
		 break;
		default:
			cout<<"You entered wrong number";
	}
	return 0;
	
}
