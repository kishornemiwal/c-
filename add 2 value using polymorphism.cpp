
#include <iostream>
using namespace std;
void add (int a,int b)
{
    cout<<"Integer Result = "<<(a+b)<<endl;
}
void add (float a,float b)
{
    cout<<"float result = "<<(a+b)<<endl;
    
}

int main()
{
    int x=1,y=2;
    float m=10.1,n=11.2;
    add(x,y);
    add(m,n);

    return 0;
}