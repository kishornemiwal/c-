
// The protected specifier is used when a member should only be a accessible
// within its own class and by derived class but not outside class.

#include<iostream>
using namespace std;

class Base
{
protected:
    int value;
public:
    Base(int v):value(v) {}
};

    class Derived:public Base
    {
    public:
        Derived(int v):Base(v) {}
        void display()
        {
            cout<<"Value: "<<value<<endl;
        }
    };        int main()
        {
            Derived d(10);
            d.display();
            return 0;
        }
