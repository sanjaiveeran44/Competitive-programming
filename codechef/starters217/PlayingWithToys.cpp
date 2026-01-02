#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (m >= n)
        cout << 0 << endl;
    else
        cout << n - m << endl;
}