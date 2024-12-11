// Single inheritance

#include<iostream>
using namespace std;
class Base
{
   private:
      int a;
   public:
      int b;
      void get_ab();
      int get_a();
      void show_a();
};
   class Derived1:public Base
   {
      private:
          int c;
      public:
         void multi();
         void display();
   };
   class Derived2:private Base
   {
      private:
         int c;
      public:
         void multi();
         void display();
   };
   
   void Base::get_ab()
   {
      a=10;
      b=20;
   }
   int Base::get_a()
   {
      return a;
   }
   void Base::show_a()
   {
      cout<<"A = "<<a<<endl;
   }
      void Derived1::multi()
      {
         c=b*get_a();
      }
      void Derived1::display()
      {
         cout<<"A = "<<get_a()<<endl;
         cout<<"B = "<<b<<endl;
         cout<<"C = "<<c<<endl;
      }
   int main()
   {
      Derived1 obj;
      obj.get_ab();
      obj.multi();
      obj.display();
      return 0;
   }
   
   