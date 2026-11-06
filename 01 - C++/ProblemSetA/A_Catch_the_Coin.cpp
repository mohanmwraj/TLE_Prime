/*
https://codeforces.com/problemset/problem/1989/A
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

/*
    Catch the coin problem: determine if the coin can be caught based on its y-coordinate.
    The coin can be caught if its y-coordinate is greater than or equal to -1.
    Input: x and y coordinates of the coin.
    Output: "YES" if the coin can be caught, "NO" otherwise.
    Example: Input: 0 -1 -> Output: YES
    Example: Input: 0 -2 -> Output: NO

    Solution: Check if y >= -1. If true, print "YES", otherwise print "NO". 
    We check y >= -1 because the coin can be caught if it is at y = -1 or higher.
    If the coin keeps on falling below y = -1, it cannot be caught.
    This logic ensures that we correctly determine if the coin can be caught based on its y-coordinate.
    if  y < -1, means monorac can move one step at a time, same time coin will fall one step, 
    if it is greater than or equal to -1, monorac can catch it.
    This explains why we only need to check if y >= -1 to determine if the coin can be caught.
    Time Complexity: O(1) per test case.
    Space Complexity: O(1).
*/

  /*
        For each coin, we are given its coordinates (x, y).

        Key Observation:
        Monocarp starts at (0, 0) and can move in 8 directions.
        That means in one second he can move to any adjacent cell
        (including diagonally).

        After every second:
        - Monocarp moves first.
        - Then the coin falls down by 1 unit (y decreases by 1).

        After analyzing the movement mathematically,
        we find that Monocarp can collect a coin
        if and only if:

                y >= -1

        If y < -1:
            The coin falls too fast and starts too low,
            so Monocarp can never catch it.

        If y >= -1:
            Monocarp can always reach it at some time.
    */
void solve(){
    int x, y;
    cin >> x >> y;
 
    if(y < -1) {
        cout<<"NO"<<endl;
    }else {
        cout << "YES" <<endl;
    }
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