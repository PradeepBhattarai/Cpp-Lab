//non const obj and non const mem_function
#include <iostream>
using namespace std;

class Sub
{
private:
    int i;
public:
    Sub(int n)
    {
        i=n;
    }
    int sub_num()
    {
        return i-1;
    }
};
int main()
{
    Sub a(10);
    cout<<a.sub_num();
    return 0;
}