#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << endl;

    int pitaiya, vasya, tonya;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> pitaiya >> vasya >> tonya;

        if (pitaiya == 1 && vasya == 1 || pitaiya == 1 && tonya == 1 || vasya == 1 && tonya == 1)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}