/*
 https://codeforces.com/problemset/problem/808/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl "\n";
#define ff first
#define ss second

/*
    find the next lucky year which num no more than one non-zero.

    If the number of digits is 1, then the delta 1, == 1, 2, 3, 4, ..
    If the number of digits is 2, then the delta 10, == 10, 20, 30, 40, ..
    If the number of digits is 3, then the delta 100, == 100, 200, 300, 400, ..
    If the number of digits is 4, then the delta 1000, == 1000, 2000, 3000, 4000, ..
    and so on.
*/

void solve() {
    string num;
    cin >> num;

    int n = num.size();

    ll x = 0, y = 1;
    for(int i = 1; i < n; i++) {
        y *= 10;
        x = x * 10 + (num[i] - '0');
    }

    cout << y - x << endl;
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