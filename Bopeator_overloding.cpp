#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    void setdata(int a ,int b)
    {
        x=a;
        y=b;
    }
    void showdata()
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl;

    }
    A operator +(A c)
    {
        A temp;
        temp.y=y+c.y;
        temp.x=x+c.x;
        return temp;

    }
};
int main()
{
    A ob,ob1,ob2;
    ob.setdata(3,2);
    ob1.setdata(4,1);
    ob.showdata();
    ob1.showdata();
    ob2=ob+ob1; //ob.operator +(ob1);
    ob2.showdata();
}