#include <iostream>
using namespace std;
float cuboid_volume (float length, float breath, float hight = 30)
{
    float volume = length*breath*hight;
    return volume;
}

int main()
{
    // hight of the cuboid is default argument
    
 float length, breath;
 cout<<"Enter the length of cuboid :-";
 cin>>length;
 cout<<"Enter the breath of cuboid :-";
 cin>>breath;
 cout<<"volume of the cuboid is : "<<cuboid_volume (length,breath);
 return 0;
}