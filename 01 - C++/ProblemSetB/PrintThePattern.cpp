/*
  https://www.hackerearth.com/problem/golf/print-the-pattern/
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl "\n";
#define ff first
#define ss second

/*
    Input: 3

    Output:
    1
    2 3
    6 5 4

*/

void solve() {
    int n = 3;
    //cin >> n;
    int num = 1;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) {
            for(int j = 0; j < i; j++) {
                cout << num++ << " ";
            }
        } else {
            int start = num + i - 1;
            for(int j = 0; j < i; j++) {
                cout << start-- << " ";
                num++;
            }
        }
        cout << endl;
    }
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