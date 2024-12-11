#include<iostream.h>
#include<stdio.h>
using namespace std;
class A
{
    int a,b;
    public:
    void showdata()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};
class B
{
    int e,f;
    public:
    friend void A:: setdata(int x,int y);
    void showdata()
    {
        cout<<"e="<<e<<endl<<"f="<<f;
    }   
};
void A:: setdata(int x,int y)
    {
        a=x;
        b=y;
    }
int main()
{
    system("cls");
    A ob;
    ob.setdata(3,5);
    ob.showdata();
    B ob1 ;
    ob1.setdata(4,5);
    ob1.showdata();
}

