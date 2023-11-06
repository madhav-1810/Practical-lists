#include<iostream>
using namespace std;

int main()
{
	int a[5],i;
	
	cout<<"Enter elements of array :: ";
	
	for(i = 0; i < 5; i++)
	{
		cin>>a[i];
	}	
	
	cout<<"The negative element of array are :: ";
	
	for(i = 0; i < 5; i++)
	{
		if(a[i] < 0)
		{
			cout<<a[i]<<endl;		
		}
	}
	
	return 0;
}
