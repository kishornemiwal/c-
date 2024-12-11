#include<iostream>
using namespace std;

class student {
private:
	char name[30];
	int rollno;
public:
	student()
	{
		cout<<"Enter your name: ";
		cin>>name;
		cout<<"Enter your rollno: ";
		cin>>rollno;
	}
	void display()
	{
		cout<<"name = "<<name<<endl;
		cout<<"rollno = "<<rollno;

	}
};
int main()
{
	student obj;
	obj.display();
	return 0;
}
