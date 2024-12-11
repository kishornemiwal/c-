#include <iostream>
using namespace std;

float circle_Area (float radius)
{
    const float pie=3.14;
    float area=3.14*radius*radius;
    return area;
};

int main()
{
    float radius;
    cout<<"Enter the radius of Cricle :- ";
    cin>>radius;
    cout<<"Area of the Circle is = " <<circle_Area (radius);

   return 0;
}