#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const double kmToMeter = 1000.0;
	const double kmToCm = 10000.0;
	const double inchToCm = 2.54;
	const double feetToCm = 30.48;
	
	double kilometer;
	
	cout<<"Enter distance in kilometer :: ";
	cin>>kilometer;
	
	double meter = kilometer * kmToMeter;
	double centimeter = kilometer * kmToCm;
	double inches = centimeter / inchToCm;
	double feet = centimeter / feetToCm;
	
	cout<<fixed<<setprecision(2);
	
	cout<<"Distance in meters :: "<<setw(10)<<meter<<" m"<<endl;
	cout<<"Distance in centimeters :: "<<setw(10)<<centimeter<<" cm"<<endl;
	cout<<"Distance in inches :: "<<setw(10)<<inches<<" in"<<endl;
	cout<<"Distance in feet :: "<<setw(10)<<feet<<" ft"<<endl;
	
	return 0;
}
