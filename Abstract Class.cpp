
// Abstract Class

#include <iostream>
using namespace std;

class Student {
protected:
    int rollno;
public:
    void getno(int);
    void putno();
};

void Student::getno(int a) {
    rollno = a;
}

void Student::putno() {
    cout << "Rollno: " << rollno << endl;
}

class Test : public virtual Student {
protected:
    float m1, m2;
public:
    void getmarks(float, float);
    void putmarks();
};

void Test::getmarks(float x, float y) {
    m1 = x;
    m2 = y;
}

void Test::putmarks() {
    cout << "Marks1: " << m1 << endl;
    cout << "Marks2: " << m2 << endl;
}

int main() {
    Test t;

    int roll;
    cout << "Enter roll number: ";
    cin >> roll;
    t.getno(roll);

    float mark1, mark2;
    cout << "Enter marks for subject 1: ";
    cin >> mark1;
    cout << "Enter marks for subject 2: ";
    cin >> mark2;

    t.getmarks(mark1, mark2);

    cout << "\nStudent Details:" << endl;
    t.putno();
    t.putmarks();

    return 0;
}
