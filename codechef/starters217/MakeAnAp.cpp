#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        int i = 0;
        while (i < n) {
            cin >> a[i];
            i++;
        }

        long long d = a[1] - a[0];
        i = 2;
        while (i < n) {
            d = gcd(d, a[i] - a[i - 1]);
            i++;
        }

        long long total = (a[n - 1] - a[0]) / d + 1;
        cout << total - n << "\n";
    }

    return 0;
}