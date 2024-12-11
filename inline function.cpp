#include<iostream>
using namespace std;
inline int fun(int a, int b)
{
    return a+b;
}
int main()
{
    int value=fun(2,5);
    cout<<"value: "<<value;
}