#include <iostream>
#include <cstring>
using namespace std;

class Teststring {
private:
    char* p;
    int len;

public:
    // Default Constructor
    Teststring() : p(), len(0) {}

    // Parameterized Constructor
    Teststring(const char* s) {
        len = strlen(s);
        p = new char[len + 1];
        strcpy(p, s);
    }

    // Copy Constructor
    Teststring(const Teststring& s) {
        len = s.len;
        p = new char[len + 1];
        strcpy(p, s.p);
    }

    // Assignment Operator
    Teststring& operator=(const Teststring& s) {
        if (this != &s) { // Avoid self-assignment
            delete[] p;
            len = s.len;
            p = new char[len + 1];
            strcpy(p, s.p);
        }
        return *this;
    }

    // Destructor
    ~Teststring() {
        delete[] p;
    }

    // Overloading the + operator
    friend Teststring operator+(const Teststring& s, const Teststring& t) {
        Teststring temp;
        temp.len = s.len + t.len;
        temp.p = new char[temp.len + 1];
        strcpy(temp.p, s.p);
        strcat(temp.p, t.p);
        return temp;
    }

    // Overloading the <= operator
    friend bool operator<=(const Teststring& s, const Teststring& t) {
        return strcmp(s.p, t.p) <= 0;
    }

    // Display function
    friend void show(const Teststring& s) {
        cout << s.p << endl;
    }
};

int main() {
    Teststring s1("Fuck");
    Teststring s2("Youuu");
    Teststring s3(" Amit Jha");
    Teststring t1, t2, t3;

    // Testing assignment operator
    t1 = s1;
    t2 = s2;

    // Concatenation
    t3 = s1 + s3;

    // Display results
    cout << "t1: ";
    show(t1);
    cout << "t2: ";
    show(t2);
    cout << "t3: ";
    show(t3);

    // Comparison
    if (t1 <= t3) {
        cout << "t1: ";
        show(t1);
        cout << "is smaller than or equal to t3: ";
        show(t3);
    } else {
        cout << "t3: ";
        show(t3);
        cout << "is smaller than t1: ";
        show(t1);
    }

    return 0;
}
