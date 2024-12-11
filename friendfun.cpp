#include<iostream.h>
#include<stdio.h>
using namespace std;
class A
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
    friend int sum(A n);
};
int sum(A n )
{
    int z= n.a+n.b;
    cout<< "\nsum is ="<<z;
}
int main()
{
    system("cls");
    int x;
    A ob;
    ob.setdata(3,5);
    ob.showdata();
    sum(ob);
}

