#include <bits/stdc++.h>
using namespace std;

int countBits(int x) {
    int cnt = 0;
    while (x) {
        cnt += (x & 1);
        x >>= 1;
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> bits(n);
        for (int i = 0; i < n; i++) {
            bits[i] = countBits(arr[i]);
        }

        vector<int> order(n);
        iota(order.begin(), order.end(), 0);

        sort(order.begin(), order.end(), [&](int i, int j) {
            if (bits[i] != bits[j]) return bits[i] < bits[j];
            return arr[i] < arr[j];
        });

        vector<int> dp(n, 1);
        int best = 1;

        for (int i = 0; i < n; i++) {
            int cur = order[i];
            for (int j = 0; j < i; j++) {
                int prev = order[j];
                if ( (arr[prev] & arr[cur]) == arr[prev] ) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            best = max(best, dp[i]);
        }

        cout << best << endl;
    }

    return 0;
}