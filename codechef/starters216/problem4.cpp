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
            if (x > 1){
                sum += 2;
            }
            else sum ++;
        }
        cout << (sum + 1) / 2 << endl;
    }

    return 0;
}