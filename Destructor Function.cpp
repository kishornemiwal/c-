#include<iostream>
using namespace std;
int count=0;

class Test
{
    public:
    Test()
    {
        count++;
        cout<<"Number of object created : "<<count<<endl;
    }
    ~Test()
    {
        cout<<"Number of object destroyed : "<<count<<endl;
        count--;
    }
};
    int main()
    {
        cout<<"Entering main"<<endl;
        Test A1,A2,A3,A4,A5;
        cout<<"All objects are created : "<<endl;
        return 0;
    }
