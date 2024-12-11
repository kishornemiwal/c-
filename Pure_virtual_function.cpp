#include<iostream>
using namespace std;
class A
{
    public:
    virtual void fun()=0;
    void fun1()
    {
        cout<<"hello";
    }
};
class B:public A
{
    public:
    void fun()
    {
        cout<<"Avi ";
    }
};
int main()
{
    A*ptr;
    B ob;
    ptr=&ob;
    ptr->fun();
    ob.fun1();
}
