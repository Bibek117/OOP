//linear search
#include <iostream>
using namespace std;
int LinSearch(int a[],int l,int r, int key){
    if(r<l)
        return -1;
    if(a[l]==key){
        return l;
    }else{
        return LinSearch(a,l+1,r,key);
    }
};
int main(){
    int n,a[100],i,key,index;
    cout<<"Enter the size of list(>100) : "<<endl;
    cin>>n;
    cout<<"Enter the elements of list :"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the key to be searched : "<<endl;
    cin>>key;
    index = LinSearch(a,0,n-1,key);
    if(index != -1){
        cout<<"Element "<<key<<" is present at index "<<index<<endl;
    }else{
        cout<<"Element is not present."<<endl;
    }
    cout<<"Name: Bibek Angdembe \n ROll no:02"<<endl;
    return 0;
}
