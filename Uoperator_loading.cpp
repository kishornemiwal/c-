#include<iostream.h>
using namespace std;
class A
{
    int x,y;
    public:
    void setdata(int a)
    {
        x=a;
    }
    void showdata()
    {
        cout<<"x="<<x<<endl;//<<"y="<<y<<endl;
    }
    int operator-();
};
int A:: operator -()
    {
        int fact=1;
        for(int i=1;i<=x;i++)
        {   
            fact=fact*i;
        }
        return fact;
    }
int main()
{
    A ob,ob1;
    ob.setdata(5);
    ob.showdata();
    int r=-ob;  //ob1.operator-();
    cout<<"factorial="<<r;
}
