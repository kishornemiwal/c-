#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the number n1 & n2: "<<endl;
    cin>>n1>>n2;
    cout<<"The number are n1= "<<n1<<" & n2= "<<n2<<endl;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<"After swap of the number n1= "<<n1 << " & n2= "<<n2<<endl;
    return 0;
    
}