#include<iostream>
using namespace std;
class Test
{
    private:
    // int a,b,c;
        int a = 10;
        int b = 20;
        int c = 30;
    public:
        void getdata()
        {
            cout<<"a: "<<a<<", b: "<<b<<", c: "<<c<<endl;
        }

            friend void operator- (Test &x);
        };

            void operator-(Test &x)
        {
            x.a = -x.a;
            x.b = -x.b;
            x.c = -x.c;
        }

        int main()
        {
            Test obj;
            obj.getdata();
            -(obj);
            obj.getdata();
            return 0;
        }
