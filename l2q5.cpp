#include<iostream>
using namespace std;
struct employee
{
    float salary;
};
inline void netSalary(employee e1)
{
    float netSalaryy=e1.salary-(0.1)*e1.salary;
    cout<<"The net salary of employee is:"<<netSalaryy;
}
int main()
{
    struct employee e1;
    cout<<"Enter the salary of employee:";
    cin>>e1.salary;
    netSalary(e1);
    return 0;
}