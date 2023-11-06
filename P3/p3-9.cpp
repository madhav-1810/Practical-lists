#include<iostream>
using namespace std;

class Max{
    private:
        int num_1;
        int num_2;
    public:
        void input()
        {
            cout<<"Enter any positive integer :)";
            cout<<"Enter number 1 :: ";
            cin>>num_1;
            cout<<"Enter number 2 :: ";
            cin>>num_2;
        }

        int largest()
        {
            if(num_1 > num_2)
            {
                return num_1;
            } 
            else if(num_1 == num_2)
            {
                return 0;
            }
            else
            {
                return num_2; 
            }
        }

        void display()
        {
            if(largest() == 0)    
            {   
                cout<<"Both are equal";
            }
            else 
            {
                cout<<"The largest of both is "<<largest();
            }
        }
};

int main()
{
    Max m1;
    m1.input();
    m1.display();

    return 0;
}