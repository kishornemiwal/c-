// power of an no using recursive function with power is -ve

#include<iostream>
using namespace std;
double power(double base, int exp) 
{
   if(exp == 0)
   {
      return 1;
   }
   if( exp < 0)
   {
      return (1/power ( base, -exp));
   }
   else{
      return(base*power(base, exp-1));
   }
}
int main(){
   double base;
   int exponent;
   cout<<"enter base and exponent : \n";
   cin>>base>>exponent;
   double result=power(base,exponent);
   cout<<base<<" : raised to the power of exponent is " <<result<<endl;
   return 0;
   
}