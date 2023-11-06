#include<iostream>
using namespace std;

int main()
{
	int no1,no2,no3,i;
	
	cout<<"Enter number 1 :: ";
	cin>>no1;
	
	cout<<"Enter number 2 :: ";
	cin>>no2;
	
	cout<<"Enter number 3 :: ";
	cin>>no3;
	
	if(no1 > no2 && no1 > no3)
	{
		cout<<"Number 1 is largest";
	}
	else if(no2 > no1 && no2 > no3)
	{
		cout<<"Number 2 is largest";
	}
	else if(no1 == no2 || no1 == no3 || no2 == no3)
	{
		cout<<"Two numbers are equal";
	}
	else {
		cout<<"Number 3 is largest"; 
	}	
	return 0;
}
