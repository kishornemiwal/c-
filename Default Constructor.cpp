#include<iostream>
using namespace std;

class student
{
    private:
        char name[30];
        int rollno;
    public:
    student()

 {
    cout<<"Enter the name : ";
    cin>>name;
    cout<<"Enter the Rollno : ";
    cin>>rollno;
 }

    void display()
    {
        cout<<"Name = "<<name;
        cout<<"\nRollno = "<<rollno;
    }
};
    
        int main() {
        student obj;
        obj.display();
        return 0;
    }
