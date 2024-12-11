
#include <iostream>
using  namespace std;

int main()
{
    int num[10],largest;
    cout<<"Enter the 10 number :- "<<endl;
    for(int i=0; i<10;i++)
    {
        cin>>num[i];
    }
    largest=num[0];
    for(int i=0;i<10;i++)
{
    largest=(largest<num[i]? largest=num[i] : largest);
}
    cout<<"Your Largest Number is "<<largest;
    
    return 0;
}