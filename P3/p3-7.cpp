#include<iostream>
using namespace std;

class Employee{
    private:
        string employee_name;
        int employee_salary;
    public:
        void get_employee_data()
        {
            cout<<"Enter Employee name :: ";
            cin>>employee_name;
            cout<<"Enter Employee Salary :: ";
            cin>>employee_salary;
        }
        void display_employee_data()
        {
            cout<<"Employee's name is "<<employee_name<<endl;
            cout<<"Employee's salary is "<<employee_salary;
        }
};

int main()
{
    Employee e1;
    e1.get_employee_data();
    e1.display_employee_data();    

    return 0;
}