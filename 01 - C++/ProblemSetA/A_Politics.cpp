/*
https://codeforces.com/problemset/problem/1818/A
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

/*
    Anyone with exactly your opinion string, since they are only removed when you are. Count how many members have that string.

    Time complexity: O(n)
    Space complexity: O(n)
*/

void solve() {
    int n, k;
    cin >> n >> k;

    vector<string> opinions(n);
    for (int i = 0; i < n; i++) {
        cin >> opinions[i];
    }

    string my_opinion = opinions[0];
    int count = 0;
    for (const auto &op : opinions) {
        if (op == my_opinion) {
            count++;
        }
    }
    cout << count << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}