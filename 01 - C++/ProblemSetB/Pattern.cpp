/*
 https://www.hackerearth.com/problem/algorithm/pattern/
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl "\n";
#define ff first
#define ss second

/*
input: 5

output: 
*****
   *
  *
 *
*****

*/

void solve() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == n-i-1) {
                cout << "*";
            } else {
                cout << " ";
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
    //n >> t;
    while (t--) {
        solve();
    }

    return 0;
}