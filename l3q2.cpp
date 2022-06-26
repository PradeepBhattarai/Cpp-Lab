#include <iostream>
using namespace std;
class Prime
{
private:
    int num;

public:
    bool isPrime(int num)
    {
        int flag = 0;
        for (int i = 2; i <= (num / 2); i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int n;
    char choice;
    Prime num1;
    do
    {
        cout<<"Enter The no to check prime or not:";
        cin>>n;
        if (num1.isPrime(n) == true)
        {
            cout << "The number you entered is Prime."<<endl;
        }
        else
        {
            cout << "The number you entered is composite"<<endl;
        }
        cout<<"Do you want to continue checking?(y/n) ";
        cin>>choice;
    } while (choice=='Y'||choice=='y');
    
    return 0;

}