#include <iostream>
using namespace std; 
class prime 
{
    int n;
    public:
    prime()
    {
        cout<<"Enter the number:- ";
        cin>>n;
    }
    void operator -();
    ~prime()
    {
        
    }
};
void prime:: operator -()
    {
        int i ,c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)   
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<"It is prime number";
        }
        else
        {
            cout<<"It is not prime number.";
        }
    }
int main()
{
    prime ob;
    ob.operator-();
}