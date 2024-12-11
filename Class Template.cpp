#include<iostream>
using namespace std;

template< class T1, class T2 >
class Test
{
   private:
      T1 a;
      T2 b;
   public:
      Test( T1 x, T2 y)
      {
         a = x;
         b = y;
      }
      void show()
      {
         cout<<"a = "<<a<<"\nb = "<<b<<endl;
      }
};

 int main()
 {
    Test< float, int > obj1( 10.5, 20 );
    Test< int, char > obj2( 110, 'A' );
    obj1.show();
    obj2.show();
    return 0;
 }
