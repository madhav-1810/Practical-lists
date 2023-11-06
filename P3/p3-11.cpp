#include<iostream>
using namespace std;

class Product{
    private:
        int product_id;
        string product_name; 
        int unit_price;
    public:
        void getData()
        {   
            cout<<"Enter Product ID :: ";
            cin>>product_id;
            cout<<"Enter Product Name :: ";
            cin>>product_name;
            cout<<"Enter Unit Price :: ";
            cin>>unit_price;
        }
        void putData()
        {
            cout<<"Product ID :: "<<product_id<<endl;
            cout<<"Product Name :: "<<product_name<<endl;
            cout<<"Product Unit Price :: "<<unit_price<<endl;
        }
};

int main()
{
    Product p1;
    p1.getData();
    p1.putData();

    return 0;
}