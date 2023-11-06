#include<iostream>
using namespace std;

struct Employee{
    string emp_name;
    int emp_code; 
    int emp_salary; 
    string emp_branch;
}e1;

int main()
{
    e1.emp_name = "Madhav Vasani";
    e1.emp_code = 118;
    e1.emp_salary = 20000;
    e1.emp_branch = "DSU";

    cout<<"Employee Name is :: "<<e1.emp_name<<endl;
    cout<<"Employee Code is :: "<<e1.emp_code<<endl;
    cout<<"Employee Salary is :: "<<e1.emp_salary<<endl;
    cout<<"Employee Branch is :: "<<e1.emp_branch<<endl;

    return 0;
}