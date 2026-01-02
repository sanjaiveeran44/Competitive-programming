#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    const long long LIMIT = 1000000000000LL;   // 1e12

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        if (y == 1) {
            cout << -1 << "\n";
            continue;
        }

        long long value = k;
        bool overflow = false;

        for (int step = 0; step < x; step++) {
            long long add = (value - 1) / (y - 1);
            value += add;

            if (value > LIMIT) {
                overflow = true;
                break;
            }
        }

        if (overflow) cout << -1 << "\n";
        else cout << value << "\n";
    }

    return 0;
}
