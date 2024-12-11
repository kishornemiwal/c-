
#include <iostream>
using namespace std;

    class student
    {
        private:
            char name [30];
            int age;
        public:
            void getdata();
            void display();
    };
        
        void student::getdata()
        {
            cout<<"Name & Age: ";
            cin>>name;
            cin>>age;
        
        }
            void student::display()
        {
           cout << "Name: " << name << ", Age: " << age << endl;
        }

int main() {
    student obj[5];
    for (int i = 0; i < 5; i++) { // Declare 'i' here
        obj[i].getdata();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; i++) {
        obj[i].display(); // Display student data
    }

    return 0;
        
    
}