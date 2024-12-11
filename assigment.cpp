#include<iostream.h>
#include<stdio.h>
using namespace std;
class student
{
    char name[20],contact_no[12];
    int rollno,sem;
    public:
    student()
    {
        cout<<"Enter the name of student:- ";
        cin>>name;
        cout<<"Enter the roll no. of student:- ";
        cin>>rollno;
        cout<<"Enter the semestar of student:- ";
        cin>>sem;
        cout<<"Enter the contact no. of student:- ";
        cin>>contact_no;        
    }
    ~student(){}
    void showdata()
    {
        cout<<"The name of student is:- ";
        cout<<name;
        cout<<"The roll no. of student is:- ";
        cout<<rollno<<endl;
        cout<<"The semester of student is:- ";
        cout<<sem<<endl;
        cout<<"The contact no. of student is:- ";
        cout<<contact_no;
    }
};
int main()
{
    student s1 ,*ptr;
    ptr=&s1;
    ptr->showdata();
    return 0;
}