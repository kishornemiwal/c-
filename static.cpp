#include<iostream.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class student
{
    char name[10];
    int rollno;
   static int sem; //declearation of static member vairable in private.
    public:
   // static int sem; //declearation of static member vairable in public.
    student()
    {
        printf("Enter your name :-");
        gets(name);
        printf("Enter your Roll no :-");
        scanf("%d",&rollno);
    }
    void show()
    {
        cout<<"Name : "<<name<<endl<<"Roll no. : "<<rollno<<endl<<"sem : "<<sem;
    }
    static  void setsem(int x) //static function is used if static member variable is declear in
                         // private section of the class.
    {
        sem=x;
    }
};
int student ::sem; // initialisation of static member vairable is must.
int main()
{
    student s1;
    student::setsem(2);  //we can set sem value without creating any object in this way .

   // s1.setsem(3);   //we can also set value of static variable by using object of the class
                    //even static variable is declear in private with the help of static function.
    s1.show();
}
