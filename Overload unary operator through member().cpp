#include<iostream>
using namespace std;

class Complex
{
    private:
        float x;
        float y;
    public:
        Complex()
        {
            cout<<"Complex No. ";
        }
        
        Complex( float real, float img )  //img= _Imaginary
        {
            x=real;
            y=img;
        }
        Complex operator+(Complex);     // user define -> class name ( complex)
        void display();
};
    Complex Complex::operator+(Complex c)
    {
        Complex temp;    // temp= object
        temp.x = x+c.x;
        temp.y = y+c.y;
        return(temp);
    }
        void Complex::display()
        {
            cout<<x<<"+"<<y<<endl;
        }
        int main()
        {
            Complex obj1, obj2, obj3;
            
            // parameterised Constructor
            
            obj1=Complex(10.5, 20.5);
            obj2=Complex(30.5, 40.5);
            obj3=obj1+obj2;
            
            cout << "First complex number: ";
            obj1.display();
            cout << "Second complex number: ";
            obj2.display();
            cout << "Third complex number: ";
            obj3.display();
            return 0;
        }
    