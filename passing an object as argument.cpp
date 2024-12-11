#include<iostream>
using namespace std;

class test
{
    public:
        int a, b;  // Declare class members
        void getdata();  // Declare member function
};

// Define member function
void test::getdata() {
    cout << "Enter values for a and b: ";
    cin >> a >> b;
}

// Add function to sum the data members of two 'test' objects
int add(test x, test y) {
    return x.a + y.b;
}

int main() {
    test obj1, obj2;
    
    // Get data for both objects
    obj1.getdata();
    obj2.getdata();
    
    // Call add function and print the result
    cout << "Sum: " << add(obj1, obj2) << endl;

    return 0;
}