#include<iostream>
using namespace std;

class myclass
{
	public:
		static void myfunction();
};


void myclass::myfunction()
{
	cout<<"This is my function() defined outside the class."<<endl;
}

int main()
{
	myclass::myfunction();
	
	return 0;
}
