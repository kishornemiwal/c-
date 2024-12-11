#include<iostream>
using namespace std;

class classB;
class classA
{
    private:
        int numA;
        friend class classB;
        
    public:
        classA() : numA(12) {}
};

    class classB
    {
        private:
            int numB;
        public:
            classB() : numB(1) {}
            int add()
        {
            classA objectA;
            return objectA.numA+numB;
        }
    };
    
        int main()
        {
            classB objectB;
            cout<<"sum: "<<objectB.add();
            return 0;
            
        }
    