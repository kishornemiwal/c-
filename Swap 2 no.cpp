#include <iostream>
using namespace std;

int main() 
{
    int x1,x2,temp;

    cout<<x1<<x2;
    cout<<"Enter 1st number";
    cin>>x1;
    cout<<"enter 2nd number";
    cin>>x2;
    temp=x1;
    x1=x2;
    x2=temp;
    cout<<"Swap first Number is: "<<x1;
    cout<<"\nSwap Second Number is: "<<x2;
    return 0;

}