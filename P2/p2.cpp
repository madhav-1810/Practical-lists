#include<iostream>
using namespace std;
void fun();		//Declaration of the function
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		fun();
	}
	
	return 0;
}
void fun()
{
	int a=0;
	static int b=3;
	//a++;
	//b++;
	cout<<"Value of a is non- static :: "<<a++<<endl;
	cout<<"Value of b static      is :: "<<b++<<endl;
}

