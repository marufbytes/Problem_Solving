#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;

    int len = name.length();

    if(len%2==0)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!" ;
    }
    return 0;
}