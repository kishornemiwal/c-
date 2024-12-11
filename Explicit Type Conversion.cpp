
// Explicit type Conversion

#include<iostream>
using namespace std;
int main()
{
    double dvar=9.66;
    int intvar=static_cast<int>(dvar);
    cout<<"Double: "<<dvar<<endl;
    cout<<"intvar: "<<intvar;
    return 0;
}
