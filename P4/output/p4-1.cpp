// Array of objects 
#include<iostream>
using namespace std;
class employee
{
	private:
		int emp_id;
		string emp_name;
	public:
		void getdata()
		{
			cout<<"Enter the employee id   : ";
			cin>>emp_id;
			cout<<"Enter the employee name : ";
			cin>>emp_name;
		}	
		void putdata()
		{
			cout<<"Employee id   : "<<emp_id<<endl;
			cout<<"Employee name : "<<emp_name<<endl;
		}
};
int main()
{
	int i,n;
	employee e[20];
	cout<<"I am madhav vasani"<<endl;
	cout<<"En_no    220130318118 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the number : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		e[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		e[i].putdata();
	}
	return 0;
}