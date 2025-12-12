#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        long long len;
        cin >> len;

        if (len <= 2) {
            cout << 0 << "\n";
        } else {
            long long ans = ( (len - 2) * (len - 2) ) / 4;
            cout << ans << "\n";
        }
    }

    return 0;
}