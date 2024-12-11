
// Catch All Exception/ invoke Calling : Exception Handling

#include<iostream>
using namespace std;

void test(int x)
{
    try {
        if (x==1)
            throw 'x';
    else if (x==1)
             throw 1.0;
             cout <<"End of try Block \n";
        }

    catch(...)
    {
        cout<<"Caught an Exception";
    }
}
    int main()
    {
                        // cout<<"x==1"<<"\n";
        test(-1);
                        //cout<<"x==0"<<"\n";
        test(0);
                        //cout<<"x==-1"<<"\n";
        test(1);
                        //cout<<"x==2"<<"\n";
                        //test (2);
        return 0;

    }
