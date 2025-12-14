#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        vector<long long>L1(n);
        vector<long long>R1(n);
        vector<long long>L2(n);
        vector<long long>R2(n);

        L1[0] = a[0];
        for (int i = 1; i < n; i++){
            L1[i] = max(a[i], L1[i-1] + a[i]);}

        R1[n-1] = a[n-1];
        for (int i = n-2; i >= 0; i--){
            R1[i] = max(a[i], R1[i+1] + a[i]);
        }

        L2[0] = b[0];
        for (int i = 1; i < n; i++){
            L2[i] = max(b[i], L2[i-1] + b[i]);
        }

        R2[n-1] = b[n-1];
        for (int i = n-2; i >= 0; i--) R2[i] = max(b[i], R2[i+1] + b[i]);

        long long ans = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            long long bestA = L1[i] + R1[i] - a[i];
            long long bestB = L2[i] + R2[i] - b[i];
            ans = max(ans, bestA + bestB);
        }

        cout << ans << "\n";
    }
}