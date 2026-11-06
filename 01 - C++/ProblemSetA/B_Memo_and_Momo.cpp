/*
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    ll a, b, k;
    cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0) {
        cout << "Both" << endl;
    } else if (a % k == 0) {
        cout << "Memo" << endl;
    } else if (b % k == 0) {
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
    }
}

void solve1(){
    ll a, b, k;
    cin >> a >> b >> k;
 
    bool memo = (a % k == 0);
    bool momo = (b % k == 0);
 
    if(memo && momo){
        cout << "Both" << endl;
    } else if (memo && !momo){
        cout << "Memo" << endl;
    } else if(!memo && momo){
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
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