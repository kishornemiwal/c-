
// Operator OverLoading

#include<iostream>
using namespace std;

class Test
{
    private:
        int x,y,z;
    public:
        void getdata(int a, int b,int c);
        void display();
        void operator-();
};
    void Test::getdata(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void Test::display()
    {
        cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
        cout<<"z= "<<z<<endl;
    }
     void Test::operator-()
     {
         x=-x;
         y=-y;
         z=-z;
     }
        int main()
        {
            Test obj;
            obj.getdata(10,-20,30);
            obj.display();
            -obj;
            obj.display();
            return 0;

        }


/* Enhanced Code:

#include <iostream>
using namespace std;

class Test {
private:
    int x, y, z; // Private members to store integers

public:
    // Member function to initialize the object
    void getdata(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    // Const function to display the values
    void display() const {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }

    // Overload the unary '-' operator to negate values
    void operator-() {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() {
    Test obj; // Create an object of the class

    // Set initial data
    obj.getdata(10, -20, 30);

    // Display original values
    cout << "Before negation:" << endl;
    obj.display();

    // Negate values using the overloaded '-' operator
    -obj;

    // Display negated values
    cout << "After negation:" << endl;
    obj.display();

    return 0;
}
*/
