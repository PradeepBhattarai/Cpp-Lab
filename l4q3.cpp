#include<iostream>
#include<cstring>
using namespace std;

class DepartmentDetails
{
    private:
        int depId;
        char* depName;
    public:
        DepartmentDetails(int id,char* name)
        {
            cout<<"Constructor is invoked."<<endl;
            depId=id;
            depName=new char[strlen(name)];
            strcpy(depName,name);
            delete [] name;
        }
    ~DepartmentDetails()
    {
        delete[] depName;
        cout<<"Object n goes out of scope."<<endl;
    }
        
};
int main()
{
    char c1[] = "Computer";
     DepartmentDetails D1(1, c1);
    return 0;
}