// const object and const member function 
#include <iostream>
using namespace std;

class Div
{
private:
    int i;

public:
    Div(int n)
    {
        i = n;
    }
    int div_num() const
    {
        return i / 2;
    }
};
int main()
{
    const Div a(4);
    cout<<a.div_num();
    return 0;
    return 0;
}