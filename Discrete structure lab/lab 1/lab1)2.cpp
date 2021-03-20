//Write a program to compute Cartesian product of two sets.
#include <iostream>
using namespace std;
int main(){
	int s1[50],s2[50],i,j,m,n;
	cout<<"Enter the no. of elements of first set:\t";
	cin>>m;
	cout<<"Enter the elements of first set:\n";
	for(i=0;i<m;i++){
		cin>>s1[i];
		}
		cout<<"Enter the no. of elements of second set:\t";
		cin>>n;
		cout<<"Enter the elements of second set:\n";
		for(i=0;i<n;i++){
			cin>>s2[i];
			}
			cout<<"The cartesian product of two sets is:\t";
			cout<<"{\t";
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					cout<<"("<<s1[i]<<","<<s2[i]<<")\t";
					}}
					cout<<"}\n";

					cout<<"Name: Bibek Angdembe \tRoll no:02";
					return 0;
					}



