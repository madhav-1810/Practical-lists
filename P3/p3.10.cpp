#include<iostream>
using namespace std;

class Max{
    private:
        int num_1;
        int num_2;
        int num_3;
    public:
        void input()
        {
            cout<<"Enter any positive integer :)";
            cout<<"Enter number 1 :: ";
            cin>>num_1;
            cout<<"Enter number 2 :: ";
            cin>>num_2;
            cout<<"Enter number 3 :: ";
            cin>>num_3;
        }

        int largest()
        {
            if(num_1 > num_2 && num_1 > num_3)
            {
                return num_1;
            }
            else if(num_2 > num_3 && num_1 < num_2)
            {
                return num_2;
            }
            else if(num_3 > num_1){}
        }

        void display()
        {
            
        }
};

int main()
{
    Max m1;
    m1.input();
    m1.display();

    return 0;
}