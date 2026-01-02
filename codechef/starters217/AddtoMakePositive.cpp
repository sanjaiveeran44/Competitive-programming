#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum >= 0) {
            cout << 0 << endl;
        } else {
            long long need = -sum;
            long long ans = (need + n - 1) / n;
            cout << ans << endl;
        }
    }
}