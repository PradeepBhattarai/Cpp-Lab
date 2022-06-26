#include <iostream>
using namespace std;
class employeeReport
{
private:
    int employeeId;
    float totalBonus, totalOvertime;

public:
    void setPara()
    {
        cout << "Enter Employee id:";
        cin >> employeeId;
        cout << "Enter TotalBonus :";
        cin >> totalBonus;
        cout << "Enter TotalOvertime:";
        cin >> totalOvertime;
    }
    void Display()
    {
        cout << "An employee with employee id: " << employeeId << " has received Rs " << totalBonus << " as bonus and had worked " << totalOvertime << " hours as overtime in the year 2021.\n\n";
    }
};
int main()
{
    int n;
    cout << "Enter the no of employees: ";
    cin >> n;
    employeeReport employee[n];
    for (int i = 0; i < n; i++)
    {
        employee[i].setPara();
    }
    for (int i = 0; i < n; i++)
    {
        employee[i].Display();
    }
    return 0;
}