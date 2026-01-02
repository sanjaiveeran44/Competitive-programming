#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    const long long MINB = 0;
    const long long MAXB = 2000000000;

    while (T--) {
        long long n, a;
        cin >> n >> a;

        vector<long long> v(n);
        for (auto &x : v) cin >> x;

        sort(v.begin(), v.end());

        unordered_set<long long> candidates;

        
        if (a - 1 >= MINB) candidates.insert(a - 1);
        if (a + 1 <= MAXB) candidates.insert(a + 1);

       
        for (long long val : v) {
            long long e = 2LL * val - a;
            long long b1 = e - 1;
            long long b2 = e + 1;

            if (MINB <= b1 && b1 <= MAXB && b1 != a) 
                candidates.insert(b1);

            if (MINB <= b2 && b2 <= MAXB && b2 != a) 
                candidates.insert(b2);
        }

        long long best_b = a;
        long long best_count = -1;

        for (long long b : candidates) {
            if (b == a) continue;

            long long cnt = 0;

            if (b > a) {
                long long thresh = (a + b) / 2;
                cnt = n - (upper_bound(v.begin(), v.end(), thresh) - v.begin());
            } else {
                long long thresh = (a + b + 1) / 2;
                cnt = (lower_bound(v.begin(), v.end(), thresh) - v.begin());
            }

            if (cnt > best_count) {
                best_count = cnt;
                best_b = b;
            }
        }

        
        if (best_count < 0) {
            best_b = (a != 0 ? 0 : 1);
        }

        cout << best_b << "\n";
    }

    return 0;
}
