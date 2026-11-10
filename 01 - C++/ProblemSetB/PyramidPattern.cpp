/*
 https://www.geeksforgeeks.org/problems/pyramid-patterns/1
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl "\n";
#define ff first
#define ss second

/*
    *
   ***
  *****
 *******
*********

*/

void solve() {
    int n = 5;
    //cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
   //in >> t;
    while (t--) {
        solve();
    }

    return 0;
}