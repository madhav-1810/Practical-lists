#include<iostream>
using namespace std;
int palim(int );
int main() 
{
	int n;
	cout<<"I am Madhav Vasani "<<endl;
	cout<<"En_no    220130318118 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the number : ";
	cin>>n;
	palim(n);
	return 0;
}
int palim(int n)
{
	int rev=0,rem,temp;
	temp = n;
	while(n>0)
	{
		rem = n%10;
		rev = (rev*10)+rem;
		n = n/10;
	}
	if(temp==rev)
	{
		cout<<"This is  palimdrome ";
	}
	else
	{
		cout<<"This is not palimdrome ";
	}
}