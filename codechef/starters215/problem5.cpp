#include <bits/stdc++.h>
using namespace std;

long long n;
int cnt;

void solve(long long prod, long long last, long long sum) {
    if (cnt >= 3) return;

    long long lim = sqrt(prod);
    for (long long x = last; x <= lim; x++) {
        if (prod % x) continue;
        if (sum + x > n) break;

        solve(prod / x, x, sum + x);
        if (cnt >= 3) return;
    }

    if (prod >= last && sum + prod <= n) {
        cnt++;
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        cin >> n;

        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }

        cnt = 0;
        solve(n, 2, 0);

        cout << min(cnt, 3) << "\n";
    }
    return 0;
}