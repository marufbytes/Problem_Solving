#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    float sum = 0, avg;
    int count = 0;

    for (int i = 0; i < 6; i++)
    { float n;
        cin >> n;

        if (n > 0)
        {
            sum += n;
            count++;
        }
    }

    cout << count << " valores positivos" << endl;
    avg =sum/count ;
    cout <<setprecision(2)<<avg << endl;

    return 0;
}