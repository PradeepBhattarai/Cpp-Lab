#include<iostream>
using namespace std;
int tempereature(int &temp1,int &temp2)
{
    if(temp1>temp2)
    {
        return temp1;
    }
    else
    {
        return temp2;
    }
}
int main()
{
    int temp1,temp2;
    cin>>temp1;
    cin>>temp2;
    cout<<tempereature(temp1,temp2);
    return 0;
}