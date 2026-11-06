/*
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    string output = "NO";

    // 1) a + b - c
    if (a + b - c == d)
        output = "YES";

    // 2) a + b * c
    else if (a + b * c == d)
        output = "YES";

    // 3) a - b + c
    else if (a - b + c == d)
        output = "YES";

    // 4) a - b * c
    else if (a - b * c == d)
        output = "YES";

    // 5) a * b + c
    else if (a * b + c == d)
        output = "YES";

    // 6) a * b - c
    else if (a * b - c == d)
        output = "YES";

    cout << output << '\n';
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