
#include <iostream>
using namespace std;

class A
{
	int a,b,c;
public:
	void getdata(int x, int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl; //friend function declaratation
	}
	friend int sum(A);
};

// Friend function defination

int sum(A n)
{
	int z=n.a+n.b;
	cout<<"sum is : "<<z<<endl;
	return z;
}

int main()
{
	A obj;                  //create an object of class an
	obj.getdata(4,5);       //set value for a and b
	obj.display();          // show the value
	sum(obj);               // pass the object as a function argument
	return 0;


}