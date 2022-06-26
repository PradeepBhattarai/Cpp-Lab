#include <iostream>
using namespace std;
void feetToInches()
{
    cout << "1feet=12inches"<<endl;
}
void feetToInches(float &feet1)
{
    cout << feet1 << "feet=" << feet1 * 12 << "inches"<<endl;
}
void feetToInches(float &feet1, float &feet2)
{
    cout << feet1 << "feet=" << feet1 * 12 << "inches"<<endl;
    cout << feet2<<"feet=" << feet2 * 12 << "inches"<<endl;
}
int main()
{
    float feet1,feet2;
    cin>>feet1;
    cin>>feet2;
    feetToInches();
    feetToInches(feet1);
    feetToInches(feet1,feet2);
    return 0;
}