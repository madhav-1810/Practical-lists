// Calculate addition of two numbers using friends function 
#include<iostream>
using namespace std;
class add{
		int a,b;
		friend void getdata(add &n);
	public:
		void putdata()
		{
			cout<<"Answer :: "<<a+b;
		}
};
void getdata(add &n)
{
	cout<<"I am Madhav vasani"<<endl;
	cout<<"En_no    220130318118 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the a : ";
	cin>>n.a;
	cout<<"Enter the b : ";
	cin>>n.b;
}
int main()
{
	add n;
	getdata(n);
	n.putdata();
	
	return 0;
}