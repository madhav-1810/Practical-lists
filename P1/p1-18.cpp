#include<iostream>
using namespace std;
int power(int , int );
int main()
{
	int b,p;
	cout<<"I am Madhav Vasani"<<endl;
	cout<<"En_no    220130318118 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the base : ";
	cin>>b;
	cout<<"Enter the power : ";
	cin>>p;
	
	power(b,p);
	return 0;
}
int power(int b,int p)
{
	int i,res=1;
	for(i=1;i<=p;i++)
	{
		res*=b;
	}
	cout<<res;
}
