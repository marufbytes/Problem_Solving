#include <iostream>
#include <set>
using namespace std;

int main()
{
    int first_year;
    cin >> first_year;

    while (true)
    {
        first_year++;
        string year = to_string(first_year);

        set<char> digits;
        for (int i = 0; i < year.length(); i++)
        {
            digits.insert(year[i]);
        }

        if (digits.size() == year.length())
        {
            cout << year;
            break;
        }
    }
}