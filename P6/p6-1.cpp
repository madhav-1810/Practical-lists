#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	cout<<"I am Madhav vasani "<<endl;
	cout<<"En_no    220130318118 "<<endl;
	cout<<"---------------------"<<endl;
	ofstream filestream("test.txt");
	if(filestream.is_open())
	{
		filestream<<"Welcome to the Dr. Subhash University";
		filestream<<"This is C++ Subject.";
		filestream.close();
	}
	else
	{
		cout<<"File Opening is fail";
	}
	return 0;
	
	
}