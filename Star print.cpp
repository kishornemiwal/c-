#include<iostream>
using namespace std;
int main()
{
	int row;
	cout<<"Enter The Number of row : ";
	cin>>row;
	for(int i=0; i<=row; i++)
	{
		for(int j=1; j<=i; ++j)

		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}