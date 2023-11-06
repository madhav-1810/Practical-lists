#include<iostream>
using namespace std;

class Account{
    public:
        int acc_no;
        float balance;
        string branch_code;
};

int main()
{
    Account a1;
    a1.acc_no = 1001;
    a1.balance = 10000;
    a1.branch_code = "BOBMGRD01";

    cout<<"Balance of Account no "<<a1.acc_no<<" is "<<a1.balance<<" in branch "<<a1.branch_code;

    return 0;
}
