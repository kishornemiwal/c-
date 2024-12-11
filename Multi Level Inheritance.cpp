// Multilevel Inheritance

#include<iostream>
using namespace std;

class student
{
   protected:
         int rollno;
   public:
         void getno(int);
         void putno();
};
   void student::getno(int a)
   {
      rollno = a;
   }
   void student::putno()
   {
   cout<<"Roll No = "<<rollno<<endl;
   }
      class Test:public student
      {
         protected:
               float m1,m2;
         public:
               void getmarks(float, float);
               void putmarks();
      };
      void Test::getmarks(float x, float y)
      {
         m1=x;
         m2=y;
      }
         void Test::putmarks()
         {
            cout<<"Marks1 = "<<m1<<endl;
            cout<<"Marks2 = "<<m2<<endl;
         }
            class Result:public Test
            {
               private:
                  float total;
               public:
                  void display();
            };
               
               void Result::display()
               {
                  total=m1+m2;
                  putno();
                  putmarks();
                  cout<<"Total Marks = "<<total<<endl;
               }
                  int main()
                  {
                     Result obj;
                     obj.getno(68);
                     obj.getmarks(20,20);
                     obj.display();
                     return 0;
                  }
         
         
         
         
         