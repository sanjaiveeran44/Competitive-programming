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

        vector<int> A(n), B(n);
        for (int &x : A){
            cin >> x;
        }
        for (int &x : B) cin >> x;

        bool ok = true;

        for (int i = 0; i + 1 < n; i++) {
            bool aup = A[i] < A[i + 1];
            bool bup = B[i] < B[i + 1];
            if (aup != bup) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}