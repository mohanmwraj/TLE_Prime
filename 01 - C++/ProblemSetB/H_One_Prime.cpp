/*
  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl "\n";
#define ff first
#define ss second

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "NO\n";
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}