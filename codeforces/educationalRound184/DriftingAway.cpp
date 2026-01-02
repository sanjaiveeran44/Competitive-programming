#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;


        int cntLeft = 0;
        for (char c : s) {
            if (c == '>') cntLeft++;
            else break;
        }

        int cntRight = 0;
        for (int i = (int)s.size() - 1; i >= 0; --i) {
            if (s[i] == '<') cntRight++;
            else break;
        }

        cout << max(cntLeft, cntRight) << "\n";
    }

    return 0;
}
