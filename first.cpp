#include <iostream.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class show
{
    int a,b;
    public:
    void input(int, int);
    void display()
    {
        cout<<a<<b;
    }
};
void show::input(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    system("cls");
    show ob;
    ob.input(2,3);
    ob.display();
    getch();
}