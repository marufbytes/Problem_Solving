#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sum = 0.00;

    for (int i = 1, j = 1; i <= 39; i = i + 2, j = j * 2)
    {
        sum+= static_cast<double>(i)/j;
    }
    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}
