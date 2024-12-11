
// Exception Handling : Some particular other than logic or Syntax error. They are know as Exception Handling

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the Value of a and b : \n";
    cin>>a;
    cin>>b;
    int x = a - b;

try {
    if (x!=0)
    {
        cout<<"Result (a/x) = "<<a/x<<"\n";
    }
    else
    {
         throw (x);
    }

}
        catch(int i)
        {
            cout<<"Exception Caught x = "<<i<<"\n";
        }
        cout<<"END";
        return 0;

}

