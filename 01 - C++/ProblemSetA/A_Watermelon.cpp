/*
https://codeforces.com/problemset/problem/4/A

*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    ll w;
    cin >> w;
    if (w > 2 && w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}