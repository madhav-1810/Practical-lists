#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double pi = 3.14;
	double largenumber = 123456789.987654321;
	
	cout<< setprecision(2)<< "pi :: "<<pi<< endl;
	cout<< setprecision(4)<< "largeNumber :: "<<largenumber<<endl;
	
	return 0;
}
