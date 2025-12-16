#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int a = (x + y) / 2;
        int b = y - a;
        cout << a << " " << b << endl;
    }
    return 0;
}