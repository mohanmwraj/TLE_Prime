/*
 https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
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

    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) even++;
        else odd++;
        if (a[i] > 0) positive++;
        else if (a[i] < 0) negative++;
    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative << "\n";
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