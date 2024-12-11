// Multiple Inhertance

#include<iostream>
using namespace std;

class M
{
   protected:
      int m;
   public:
      void get_m(int);
};

   class N
   {
      protected:
         int n;
      public:
         void get_n(int);
   };
      class P : public M, public N
      {
         public:
            void display();
      };
      void M::get_m(int x)
      {
         m = x;
      }
      void N::get_n(int y)
      {
         n = y;
      }
      void P::display()
      {
         cout<<"M = "<< m <<", N = "<< n <<", m  * n = " << m * n;
      }

      int main()
      {
         P obj;
         obj.get_m(10);
         obj.get_n(20);
         obj.display();
         return 0;

      }
