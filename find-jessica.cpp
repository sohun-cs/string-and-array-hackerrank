#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    getline(cin, line);

    stringstream ss(line);
    string word;
    bool found = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    cout << (found ? "YES" : "NO") << endl;

    return 0;
}
