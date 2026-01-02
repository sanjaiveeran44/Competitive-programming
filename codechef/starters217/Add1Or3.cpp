#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        if (m < n) {
            cout << "NO" <<endl;
            continue;
        }

        long long diff = m - n;
        if (diff % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }
        
        long long three = diff / 2;
        (three <= n) ? cout << "YES" <<endl : cout << "NO" <<endl;
    }
    return 0;
}