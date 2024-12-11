
// Difference between function overloading and overridding

#include<iostream>
using namespace std;
class print
{
public:
    void display(int i) {
    cout<<"integer: "<<i<<endl;
    }
    void display(double d) {
        cout<<"Double: "<<d<<endl;
    }
     void display(string s)
     {
         cout<<"string: "<<s<<endl;
     }

};
    int main()
    {
        print p;
        p.display(5);
        p.display(5.55);
        p.display("hello");
        return 0;
    }



