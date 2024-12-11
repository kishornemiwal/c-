#include <iostream>
using namespace std;

class student {
private:
    char name[50];
    int age;

public:
    void getdata();
    void display()
    {
        cout<<"The name of Student is: "<<name<<endl;
        cout<<"The age of Student is: "<<age<<endl;
    }
};
void student::getdata() {
    cout<<"Enter the name of the Student: ";
    cin>>name;
    cout<<"The age of Student is: ";
    cin>>age;
}
int main() {
    student obj;
    obj.getdata();
    obj.display();
    return 0;

}

