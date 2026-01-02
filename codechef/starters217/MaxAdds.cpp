#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll m;
        cin >> n >> m;

        vector<ll> a(n), b(n);
        ll sum_b = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sum_b += b[i];
        }

        auto get_f = [&](ll x) {
            ll curr = x;
            for (int i = 0; i < n; i++) {
                curr = max(curr + b[i], a[i]);
            }
            return curr;
        };

        ll f0 = get_f(0);
        ll low = 1, high = m, split = 0;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (get_f(mid) == f0) {
                split = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        ll ans = split * f0;
        if (split < m) {
            ll cnt = m - split;
            ll first = split + 1;
            ll last = m;
            ans += (cnt * (first + last)) / 2;
            ans += cnt * sum_b;
        }

        cout << ans << endl;
    }
    return 0;
}