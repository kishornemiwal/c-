
//virtual base class

#include<iostream>
using namespace std;

/*student --> Test
student -->sports
Test -->Result
Sports --> Result
*/

class Student {
protected:
    int rollno;
public:
    void set_no(int a)
    {
        rollno=a;
    }
    void printno()
    {
        cout<<"Your Roll no is : "<<rollno<<endl;
    }
};
    class Test:virtual public Student {
    protected:
        float maths, physics;
    public:
        void setmarks(float m1, float m2)
        {
            maths = m1;
            physics = m2;
        }

        void printmarks()
        {
            cout<<"Your Result is : "<<endl
                 <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }
    };

class Sports:virtual public Student
{
protected:
    float score;
public:
    void setscore(float sc)
    {
         score = sc;
    }
    void printscore()
    {
        cout<<"Your Total score is: "<<score<<endl;
    }
};
    class Result:public Test, public Sports
    {
    private:
        float total;
    public:
        void display()
        {
            total = maths+physics+score;
            printno();
            printmarks();
            printscore();
            cout<<"Your Total Marks is : "<<total<<endl;
        }
    };

    int main()
    {
      Result r;
      r.set_no(870);
      r.setmarks(87,66.8);
      r.setscore(9);
      r.display();
      return 0;
    }
