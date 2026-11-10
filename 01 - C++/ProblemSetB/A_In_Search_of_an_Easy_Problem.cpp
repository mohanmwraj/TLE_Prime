/*
 https://codeforces.com/problemset/problem/1030/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // sort(a.begin(), a.end());
    // cout << a[0] << " " << a[n - 1] << "\n";
    for (int i = 0; i < n; i++){
        if (a[i] == 1) {
            cout << "HARD\n";
            return;
        }
    }
    cout << "EASY\n";
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