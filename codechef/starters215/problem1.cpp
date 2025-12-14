#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, b, g;
        cin >> r >> b >> g;
        int k = min({r, b, g});
        int rem = r + b + g - 3 * k;
        cout << k * 10 + rem * 3 << "\n";
    }
    return 0;
}