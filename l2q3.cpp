#include <iostream>
using namespace std;
namespace Square
{
    int num;
    int fun(int num)
    {
        return num * num;
    }
}
namespace Cube
{
    int num;
    int fun(int num)
    {
        return num * num * num;
    }

}
int main()
{
    int num1,num2;
    cin>>num1;
    cin>>num2;
    cout<<Square::fun(num1)<<endl;
    cout<<Cube::fun(num2)<<endl;
    return 0;
}