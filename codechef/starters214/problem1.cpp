#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int x, y, z;
        cin >> x >> y >> z;
        int Lf = x - y, Rf = x + y;      
        int Lt = x - z, Rt = x + z;      

        int L = max(Lf, Lt);
        int R = min(Rf, Rt);

        if (L > R) { 
            cout << 0 << "\n";
            continue;
        }
        int total = R - L + 1;

        if (L <= x && x <= R)
            total--;

        cout << total << "\n";
    }

    return 0;
}