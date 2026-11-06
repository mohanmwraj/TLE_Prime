/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int mx = max({a, b, c});
    int mn = min({a, b, c});
    cout << mn << " " << mx << "\n";


    // int mini = A;
    // int maxi = A;

    // // Check for mini
    // if (B < mini) {
    //     mini = B;
    // }
    // if (C < mini) {
    //     mini = C;
    // }

    // // Check for maxi
    // if (B > maxi) {
    //     maxi = B;
    // }
    // if (C > maxi) {
    //     maxi = C;
    // }

    // // Print mini followed by maxi
    // cout << mini << " " << maxi;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
 //   cin >> t;
    while (t--) {
        // code here
        solve();
    }

    return 0;
}