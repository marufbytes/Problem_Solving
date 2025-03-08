#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cout << endl;
    cin >> m;

    string spell[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = n; i <= m; i++)
    {
        if (i >= 1 && i <= 9)
        {
            cout << spell[i - 1] << endl;
        }
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}