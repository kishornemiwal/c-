/******************************************************************************



*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float x1,x2,y1,y2,Dis;
  cout <<"Enter the value of x1,x2,y1,y2: "<< endl;
  cin >>x1>>y1>>x2>>y2;
  Dis=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
  cout<<"Distance="<<Dis<<endl;
 
    return 0;
};