#include<iostream>
using namespace std;
int main()
{
	int a,b,opr;
	cout<<"I am Madhav Vasani "<<endl;
	cout<<"En_no    220130318118 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the a : ";
	cin>>a;
	cout<<"Enter the b : "<<endl;
	cin>>b;
	cout<<"1 Add"<<endl;
	cout<<"2 Sub"<<endl;
	cout<<"3 Mul"<<endl;
	cout<<"4 Div"<<endl;
	cout<<"5 Mod"<<endl;
	cout<<"Enter the opreator : ";
	cin>>opr;
	
	switch(opr)
	{
		case 1:
			cout<<"A + b : "<<a+b;
		break;
		case 2:
			cout<<"A - b : "<<a-b;
		break;
		case 3:
			cout<<"A * B : "<<a*b;
		break;
		case 4:
			cout<<"A / B : "<<a/b;
		break;
		case 5:
			cout<<"A % B : "<<a%b;
		break;
		default:
			cout<<"Sorry";
	}
}
