#include<iostream>
using namespace std;

void swapnumbers(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int num1, num2;
	
	cout<<"Enter number  1 :: ";
	cin>>num1;
	
	cout<<"Enter number 2 :: ";
	cin>>num2;
	
	cout<<"Before Swapping :: "<<num1<<" "<<num2<<endl;
	
	swapnumbers(num1, num2);
	
	cout<<"After Swapping :: "<<num1<<" "<<num2;
	
	return 0;
}
