/*8.Define a class Birthday with members: day, month and year.
Use object of this class as member of another class Employee
to read and display name and DOB of an employee.*/

#include<iostream>
using namespace std;
class Birthday
{
public:
    int day,month,year;
    Birthday()
    {
        day = 15;
        month = 10;
        year = 2057;
    }
};
class Employee
{
    string name;
public:
    Birthday date;
    Employee()
    {
        name="Bibek Angdembe";
    }
    void details()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"DOB : "<<date.day<<"/"<<date.month<<"/"<<date.year<<endl;
    }

};
int main()
{
    Employee worker;
    worker.details();
}
