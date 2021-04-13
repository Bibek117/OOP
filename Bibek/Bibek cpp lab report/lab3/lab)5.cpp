/*Create a class called cricketer with member variables to represent name, age and no of matches
played. From this class derive two classes: Bowler and Batsman. Bowler class has no of wickets
as member variable and Batsman class has no, of runs and centuries as member variables. Use
appropriate member functions in all classes to read and display respective data.*/
#include<iostream>
using namespace std;
class cricketer
{
    char *name;
    int age;
    int no_of_match;
    public:
    void readData()
    {
        name = new char;
        cout<<"Enter the cricketer name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Enter the no of matches played : ";
        cin>>no_of_match;
    }
    void showData()
    {
        cout<<"Name : "<<name<<"\t"<<"Age : "<<age<<"\n"<<"No of matches played : "<<no_of_match<<endl;
    }
};
class Bowler:public cricketer
{
    int no_of_wickets;
    public:
    void bowlerinfo(){
        readData();
        cout<<"Enter the no of wickets taken : ";
        cin>>no_of_wickets;
    }
    void display()
    {
        showData();
        cout<<"No of wickets taken : "<<no_of_wickets<<endl;
    }
};
class Batsman: public cricketer
{
    int no_of_runs,no_of_centuries;
    public:
    void batsmaninfo()
    {
        readData();
        cout<<"Enter number of runs scored : ";
        cin>>no_of_runs;
        cout<<"Enter nummber of centuries hit : ";
        cin>>no_of_centuries;
    }
    void output()
    {
        showData();
        cout<<"No of runs scored : "<<no_of_runs<<endl;
        cout<<"NO of centuries hit : "<<no_of_centuries<<endl;
    }
};
int main()
{
    Batsman bat;
    Bowler ball;
    cout<<"For batsman : "<<endl;
    bat.batsmaninfo();
    cout<<"For baller : "<<endl;
    ball.bowlerinfo();
    cout<<"\n\n\n";
    cout<<"---------Bats man details-------"<<endl;
    bat.output();
    cout<<"\n\n";
    cout<<"---------Bowler details-------"<<endl;
    ball.display();
    return 0;
}

