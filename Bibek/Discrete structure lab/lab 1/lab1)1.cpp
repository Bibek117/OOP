//Write a program to implement  union and intersection opreations of two sets
#include <iostream>
using namespace std;
int i,k,j,flag;
void unionop(int set1[],int set2[],int m,int n);
void intersectionop(int set1[],int set2[],int m,int n);
void input(int s[],int n){
	for(i=0;i<n;i++){
		cin>>s[i];
		}

		cout<<"The entered set is:\t";
		cout<<"{\t";
			for(i=0;i<n;i++){
        if(i==n-1){
         cout<<s[i];
        }else{
          cout<<s[i]<<",\t";
        }
        }
        cout<<"}\n";
        }
int main(){
	int a,n1,n2,first[100],second[100];
	cout<<"Enter the number of elements of first set :\t";
	cin>>n1;
	cout<<"Enter the elements of first set:\n";
	input(first,n1);
	cout<<"Enter the number of elements of second set:\t";
	cin>>n2;
	cout<<"Enter the elements of second set:\n";
	input(second,n2);
    cout<<"Enter (1)for union opertion and (2) for intersection operation.\n";
	cin>>a;
	switch(a){
		case 1:
		unionop(first,second,n1,n2);
		break;
		case 2:
		intersectionop(first,second,n1,n2);
		break;
		default:
		cout<<"Warning! Invalid operation\n";
		}
     cout<<"Name:Bibek Angdembe \tRoll no:02";
	return 0;

	}
void unionop( int set1[],int set2[],int m,int n){
	int set3[100];
	k=0;
	for(i=0;i<m;i++){
		set3[k]=set1[i];
		k++;
		}
for(i=0;i<n;i++){
	flag=0;
	for(j=0;j<m;j++){
	if(set2[i]==set1[j]){
		flag=1;
		break;
		}
		}
		if(flag==0){
			set3[k]=set2[i];
			k++;
			}}
cout<<"The union of two sets is:\t";
cout<<"{\t";
	for(i=0;i<k;i++){
		cout<<set3[i];
		}
		cout<<"}\n";
		}
void intersectionop(int set1[],int set2[],int m,int n){
	int setc[100];
	k=0;
	for(i=0;i<m;i++){
		flag=1;
		for(j=0;j<n;j++){
			if(set1[i]==set2[j]){
				flag=0;
				break;
				}
				}
	if(flag==0){
		setc[k]=set1[i];
		k++;

	}
}
cout<<"The intersection of two sets is:\t";
cout<<"{\t";
	for(i=0;i<k;i++){
		cout<<setc[i]<<",\t";
		}
		cout<<"}\n";
		}









