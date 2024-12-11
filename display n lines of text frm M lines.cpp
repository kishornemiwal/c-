#include <iostream>
#include<string>
using namespace std;
int main()
{
    int tlines, sline, numbers;
    cout<<"Enter the Total No of Lines: ";
    cin>>tlines;
    cin.ignore();
    string text[tlines];
    cout<<"Enter the text (multiple lines ): \n";
    for (int i=0; i<tlines; i++)
    {
        getline(cin, text[i]);
    
    }
    cout<<"Enter the line number to start from (m): ";
    cin>>sline;
    cout<<"Enter the number of lines to display (n): ";
    cin>>numbers;
    cout<<"\nDisplay"<<numbers<<"Lines Start from line"<<sline<<" :\n";
    for (int i = sline - 1; i < sline - 1 + numbers && i < tlines; ++i)
    
    {
        cout<<text[i]<<endl;
    }
    return 0;
}