#include <iostream>
#include <set>
using namespace std;

int main()
{
    string name;
    cin >> name;

    set<char> letters;

    for (int i = 0; i < name.length(); i++) {
        letters.insert(name[i]);
    }

    int count = letters.size();

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }

    return 0;
}