/*Create a class student with rno to represent RollNo as data member, getnumber() and putnumber() as member function to read and display roll no of a student. Create two derived classes Exam and Sport from student class. The exam class handles marks in exam and class sport handles score received in sport activities. Finally, derive a fourth class Result from class Exam and Sport to calculate total score. WAP to read rollno, marks in exam and sport and display total score using above class.
*/
//hybrid inheritance
#include<iostream>
using namespace std;
class student
{
    protected:
    int rno;
    public:
    void getNumber()
    {
        cout<<"Enter the student roll number : ";
        cin>>rno;
    }
    void putNumber()
    {
        cout<<"Student roll number : "<<rno<<endl;
    }
};
class Exam:public virtual student   //making virtual to remove base class ambiguity  (two syntax)
{
    public: 
    int exam_mark;
    void getMark()
    {
        cout<<"Enter the marks scored in exam : ";
        cin>>exam_mark;
    }
    void showMark()
    {
        cout<<"The marks scored in exam is "<<exam_mark<<endl;
    }
};
class Sport:virtual public student   //making virtual to remove base class ambiguity
{
    public:
    int sport_mark;
    void getsport()
    {
        cout<<"Enter the marks scored in sports activities : ";
        cin>>sport_mark;
    }
    void putsport()
    {
        cout<<"The marks scored in sports activities is "<<sport_mark<<endl;
    }
};
class Result:public Exam,public Sport
{
    int total;
    public:
    void totalScore()
    {
        total = exam_mark + sport_mark;
        putNumber();
        showMark();
        putsport();
        cout<<"The total marks scored by the student is : "<<total<<endl;
    }
};
int main()
{
    Result st;
    st.getNumber();  //get rollno base class
    st.getMark();    //get exam mark branch class 
    st.getsport();   //get sports mark branch class
    cout<<"----------------student result---------------"<<endl;
    st.totalScore();   //final class calculates total
    return 0;

}