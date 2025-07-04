#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S, X;
        cin >> S >> X;

        string ans = "";
        size_t i = 0; // use size_t to match S.size() type
        while (i < S.size()) {
            if (S.substr(i, X.size()) == X) {
                ans += "#";
                i += X.size();
            } else {
                ans += S[i];
                i++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
