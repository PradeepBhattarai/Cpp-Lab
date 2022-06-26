//non const object and const mem_function
#include <iostream>
using namespace std;
class mul
{
private:
    int i;
public:
    mul(int n)
    {
        i=n;
    }
    int mul_num() const
    {
        return i*2;
    }
};
int main()
{
    mul a(4);
    cout<<a.mul_num();
    return 0;
}