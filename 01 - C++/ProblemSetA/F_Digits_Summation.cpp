/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int a, b;
    cin >> a >> b;

    int sum = 0;
    sum = a%10 + b%10;
    cout << sum << "\n";

    return;
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