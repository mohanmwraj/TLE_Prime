/*
 https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
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
    vector<ll> fib(n);
    fib[0] = 0;
    if (n > 1) fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    // for (int i = 0; i < n; i++) {
    //     cout << fib[i] << " ";
    // }
    cout << fib[n - 1] << "\n";
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