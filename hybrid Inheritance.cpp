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
    class Test : public student
    {
     protected:
         float m1, m2;
     public:
         void getmarks( float, float);
         void putmarks();
    };

      void Test::getmarks(float x, float y)
      {
         m1=x;
         m2=y;
      }
    void Test::putmarks()
    {
       cout <<"Marks 1 : "<< m1 <<endl;
       cout <<"Marks 2 : "<< m2 <<endl;
    }
     class sports
     {
        protected:
            float score;
        public:
            void getscore(float s)
            {
               score = s;
            }

            void putscore()
            {
               cout<<"sports Marks = "<<score<<endl;
            }
     };

         class Restult : public Test, public sports
         {
            private:
               float total;
            public:
               void display();
         };

            void Restult::display()
            {
               total = m1 + m2 + score;
               putno();
               putmarks();
               putscore();
               cout<<"Total Marks = "<<total<<endl;
            }

      int main()
      {
         Restult obj;
         obj.getno(78);
         obj.getmarks(20,25);
         obj.getscore(25);
         obj.display();
         return 0;
      }






