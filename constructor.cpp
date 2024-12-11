#include <iostream.h> 
using namespace std; 
class A 
{ 
	int x,y;  
public: 
	A() 
	{ 
		x=10;
		y=20;
	} 
	A(int x) // constructor inside the class.
	{
	    x++;
		cout<<"x="<<x<<endl;	
	}
	A(int,int); // declartion of constructor.
	A(A &b);	// declartion of constructor.
	void display()
	{
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
	}
}; 
A::A(int a,int b )	//defination of constructor outside the class.
{
	int s=a+b;
	cout<<"s="<<s<<endl;
}
A::A(A &b)  //defination of constructor outside the class(Copy constructor).
{ 
	x=b.x;
	y=b.y;

}
int main() 
{ 
	A s; 			// Outputs are:-
	s.display();	// x=10, y=20
	A s1(64);		// x=65
	A s2(3,2);		// s=5
	A s3(s);		
	s3.display(); 	// x=10, y=20
}
