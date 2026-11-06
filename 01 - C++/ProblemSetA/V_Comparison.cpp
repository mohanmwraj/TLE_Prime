/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    int a, b;
    char s;
    cin >> a >> s >> b;
 
    if(s == '>'){
        if(a > b) {
            cout << "Right" << endl;
        } else 
            cout << "Wrong" << endl;
    } else if(s == '<'){
        if(a < b) {
            cout << "Right" << endl;
        } else 
            cout << "Wrong" << endl;
    } else if(s == '='){
        if(a == b) {
            cout << "Right" << endl;
        } else 
            cout << "Wrong" << endl;
    }
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