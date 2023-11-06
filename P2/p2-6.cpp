#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int number=123;
	char fillchar='*';
	
	cout<<"Default :: "<<setw(10)<<number<<endl;
	cout<<"With setfill :: "<<setfill(fillchar)<<setw(10)<<number<<endl;
	
	return 0;
}
