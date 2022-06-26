#include<iostream>
using namespace std;
struct Date
{
    int year;
    int month;
    int day;
};
void DisplayDate(struct Date today)
{
    cout<<today.month<<"/"<<today.day<<"/"<<today.year<<endl;
}
int main()
{
    Date today;
    cout<<"Today's date in month day and year separately\n";
    cin>>today.month;
    cin>>today.day;
    cin>>today.year;
    DisplayDate(today);
    return 0;
}