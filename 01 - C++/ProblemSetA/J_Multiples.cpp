/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if ((a != 0 && b % a == 0) || (b != 0 && a % b == 0)) {
        cout << "Multiples\n";
    } else {
        cout << "No Multiples\n";
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