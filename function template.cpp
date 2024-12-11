#include<iostream>
using namespace std;

template<class T>
void swap1( T &x, T &y)
{
   T temp;
   temp = x;
   x = y;
   y = temp;
}
 void fun (int m, int n, float a, float b)
 {
    cout<<"M and N before swap"<<m<<n;
    swap1(m, n);
    cout<<"After Swap"<<m<<n;
    cout<<"A and B before swap"<<a<<b;
    swap1(a, b);
    cout<<"After Swap"<<a<<b;
 }

 int main()
 {
    fun(10,20,10.5,20.5);
    return 0;
 }
