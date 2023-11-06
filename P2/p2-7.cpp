#include<iostream>
using namespace std;

enum day
{
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thrusday,
	Friday,
	Saturday
};

int main()
{
	int num;
	
	cout<<"Enter number :: ";
	cin>>num;
	
	switch(num)
	{
		case 0:
			cout<<day(0)<<":: Sunday";
			break;
		case 1:
			cout<<day(1)<<":: Monday";
			break;
		case 2:
			cout<<day(2)<<":: Tuesday";
			break;
		case 3:
			cout<<day(3)<<":: Wednesday";
			break;
		case 4:
			cout<<day(4)<<":: Thrusday";
			break;
		case 5:
			cout<<day(5)<<":: Friday";
			break;
		case 6:
			cout<<day(6)<<":: Saturday";
			break;
		default:
			cout<<"Invalid number :: ";
			break;
	}
	
	return 0;
}
