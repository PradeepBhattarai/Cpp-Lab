#include <iostream>
#include <cstring>

using namespace std;
class dynamic
{
private:
    char *arr;

public:
    dynamic(char *input)
    {
        arr = new char[strlen(input)];
        strcpy(arr, input);
    }

    void join(dynamic &a, dynamic &b)
    {
        int l1 = strlen(a.arr);
        int l2 = strlen(b.arr);
        int i = 0;
        delete[] arr;
        arr = new char[l1 + l2];
        while (i < l1)
        {
            arr[i] = a.arr[i];
            i++;
        }
        while (i < (l1 + l2))
        {
            arr[i] = b.arr[i - l1];
            i++;
        }
        arr[l1 + l2] = '\0';
    }
    void show()
    {
        cout << arr << endl;
    }
    ~dynamic()
    {
        delete[] arr;
    }
};
int main()
{
    char c1[] = "Engineers are ";
    char c2[] = "creatures of logic.";
    char c3[] = "";
    dynamic fs(c1);
    dynamic ls(c2);
    dynamic js(c3);
    js.join(fs, ls);
    js.show();
    return 0;
}