#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int z = 0, o = 0;
        for (char c : s) {
            if (c == '0') z++;
            else o++;
        }

        vector<int> grp(k, 0);
        for (int i = 0; i < n; i++) grp[i % k]++;

        int cap = 0;
        for (int g : grp) cap += (g + 1) / 2;

        if (z <= cap && o <= cap) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}