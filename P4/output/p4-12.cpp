// Copy constructor 
#include<iostream>
using namespace std;
class area{
	int m,n;
	public:
		area()
		{
			cout<<"Enter the value of m  : ";
			cin>>m;
			cout<<"Enter the value of n  : ";
			cin>>n;	
			//cout<<"Paramitized constructor ";
		}
		area(area &r)
		{
			m = r.m;
			n = r.n;
			cout<<"Ans : "<<m*n;
		}
};
int main()
{
	cout<<"I am Madhav vasani "<<endl;
	cout<<"En_no    2201303181118 "<<endl;
	cout<<"---------------------"<<endl;
	area a2;
	area a1(a2);
}