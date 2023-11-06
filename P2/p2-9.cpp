#include<iostream>
using namespace std;

int num1 = 5;
int num2 = 5;

int main()
{
	int sum;
	
	sum = ::num1 + ::num2;
	
	cout<<"Sum of numbers :: "<<sum;
	
	return 0;
}
