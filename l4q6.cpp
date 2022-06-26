#include <iostream>
using namespace std;
class Serial
{
    static int id;

public:
    Serial()
    {
        int new_id;
        id = new_id;
    }
    static void display()
    {
        cout << "The serial number is: " << id << endl;
    }
    void add()
    {
        cout << id + 5 << endl;
    }
};
int Serial::id = 5;
int main()
{
    Serial s1, s2;
    Serial::display();
    s1.add();
    s2.add();
    return 0;
}