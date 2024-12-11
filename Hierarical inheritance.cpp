#include<iostream>
using namespace std;

class student
{
 protected:
     int rollno;
 public:
     void getno(int a)
     {
      rollno = a;
     }

     void putno()
     {
        cout<<"Roll no = "<<rollno<<endl;
     }
};
    void student:public student
    {
     protected:
        float marks;
     public:
        void getmarks( float m )
        {
            marks = m;
        }
         void putmarks()
        {
            cout<<"Marks1 = "<< marks1 <<endl;
        }
    };

      class subject2:public student
      {
        protected:
            float marks2;
        public:
            void getmarks2 ( float m2)
            {
            marks2 = m2;
            }
            void putmarks()
            {
                cout<<" marks2 = "<< marks <<endl;
            }
      };


      int main()
      {
         subject1 s1;
         s1.get rollno(90);
         s1.getmarks(100);
         s1.putmarks();
         s1.putrollno();

         subject s2;
         s2.get rollno(68);
         s2.getmarks(96);
         s2.putmarks();
         s2.putrollno();
         return 0;
      }






