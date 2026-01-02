#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> arr(n), pref(n + 1, 0);
        for (int i = 0; i < n; i++) cin >> arr[i];

        // build prefix sum
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + arr[i - 1];
        }

        long long bestGain = LLONG_MIN / 4;
        long long lowestB = 0;   // corresponds to minB in python

        for (int r = 1; r <= n; r++) {
            long long B_now = 1LL * r * r + r - pref[r];
            long long diff = B_now - lowestB;

            if (diff > bestGain) {
                bestGain = diff;
            }

            if (B_now < lowestB) {
                lowestB = B_now;
            }
        }

        long long result = pref[n] + max(0LL, bestGain);
        cout << result << "\n";
    }

    return 0;
}
