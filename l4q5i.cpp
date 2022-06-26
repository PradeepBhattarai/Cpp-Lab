// const object and non const mem_function 
#include <iostream>
using namespace std;
class Add
{
private:
    int i;
public:
    Add(int n)
    {
        i=n;
    }
    int add_num() 
    {
        return (i+1);
    }
};
int main()
{
    const Add a(4);
    cout<<a.add_num();
    return 0;
}
//This program doesn't works unless the member function also beocmes const