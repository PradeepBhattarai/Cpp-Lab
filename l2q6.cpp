#include<iostream>
using namespace std;
void newsalary(float sal,float inc)
{
    float newsalaryy=sal+(inc/100)*sal;
    cout<<"previous salary="<<sal<<"\tnew salary="<<newsalaryy<<endl;

}
int main()
{
    cout<<"For Chief executive officer\n";
    newsalary(35000,9) ;
    cout<<"For information officer\n";
    newsalary(25000,10);
    cout<<"For System Analyst\n";
    newsalary(24000,12);
    cout<<"For Programmer\n";
    newsalary(18000,12);
    return 0;
}