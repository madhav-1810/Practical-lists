#include<iostream>
using namespace std;

class Myclass
{
	public:
		static int staticVar;
};

int Myclass::staticVar=10;

int main()
{
	cout<<"Static Variable :: "<<Myclass::staticVar<<endl;
	
	Myclass::staticVar=20;
	
	cout<<"Modified Static Variable :: "<<Myclass::staticVar;
}
