#include<iostream>
using namespace std;

float volume (float x);                 // Cube
float volume (float r, int h);          // Cylinder
float volume (int l, int b, int h=10);  // Box

int main()
{
    cout << volume(50.5f) << endl;      // Cube
    cout << volume(30.5f, 20) << "\n";  // Cylinder
    cout << volume(10, 20) << endl;     // Box
    return 0;
}

// Cube volume
float volume (float x)
{
    return (x * x * x);
}

// Cylinder volume
float volume (float r, int h)
{
    return (3.1416 * r * r * h);
}

// Box volume
float volume (int l, int b, int h)
{
    return (l * b * h);
}
