/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    string fpfn, fpsn;
    string spfn, spsn;
    cin >> fpfn >> fpsn >> spfn >> spsn;
    if (fpsn == spsn) {
        cout << "ARE Brothers\n";
    } else {
        cout << "NOT\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        // code here
        solve();
    }

    return 0;
}