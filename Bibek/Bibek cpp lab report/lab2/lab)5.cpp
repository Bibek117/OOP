//WAP to overload binary plus operator for concatenation of two strings
#include<iostream>
#include<string.h>
using namespace std;
class join
{
    char *word;
    int len;
    public:
    void input(){
        char str[20];
        cout<<"Enter a string : ";
        cin>>str;
        len=strlen(str);
        word = new char[len+1];
        strcpy(word,str);
    }
    join operator +(join w1){   //binary + operator overlaoding
        join temp;
        temp.word =new char[len+w1.len+1];
        strcpy(temp.word,word);
        strcat(temp.word,w1.word);
        return temp;
    }
    void display();
};
void join::display(){
    cout<<"The concat string is : "<<word;
}
int main(){
    join s1,s2,s3;
    s1.input();
    s2.input();
    s3 = s1 + s2; //call
    s3.display();
    return 0;
    
}