/*
 https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            cout << i << "\n";
    //cout << "\n";
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
