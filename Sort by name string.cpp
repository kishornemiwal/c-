//Sort name of student 

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
		
	char Names[5][20];
	char c[20];
	
	for(int i =0 ; i <5;i++)
	{

	cout<<"Enter Your Desire Names: ";
	  cin>>Names[i];
	  
}
   for(int i = 1 ; i < 5;i++)
   {
   	for(int j = 1 ; j <5;j++)
	   {
   		if(strcmp(Names[j-1], Names[j])>0){
   			strcpy(c , Names[j-1]);
   			strcpy(Names[j-1] , Names[j]);
   			strcpy(Names[j],c);
		   }
	   }
   }
   cout<<"Names In Alphabetical Order:\n";
   for(int i = 0 ; i <5;i++)
{
   		cout<<Names[i]<<"\n";
   }
}