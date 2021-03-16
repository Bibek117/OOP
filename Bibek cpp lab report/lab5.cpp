/*5.Write a program to define a class named Employee with its data members
 ID, name and Salary. Read records of five employees and display the records.*/
 #include<iostream>
 using namespace std;
 class employee
{
    int ID;
    char *name;
    int salary;
public:
    void readData()
    {
        cout<<"Enter the employee ID : ";
        cin>>ID;
        name = new char;
        cout<<"Enter the employee name : ";
        cin>>name;
        cout<<"Enter the Salary : ";
        cin>>salary;
    }
    void display()
    {
        cout<<"Employee ID : "<<ID<<endl;
        cout<<"Employee name : "<<name<<endl;
        cout<<"Employee salary : "<<salary<<endl;
    }
};
int main()
{
    employee e[5];
    for(int i=1;i<=5;i++)
    {
        cout<<"Student "<<i<<endl;
        e[i].readData();
    }
    for(int i=1;i<=5;i++)
    {
        cout<<"Student "<<i<<endl;
        e[i].display();
    }
    return 0;
}
