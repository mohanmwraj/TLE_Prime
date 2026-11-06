/*
https://codeforces.com/contest/1669/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

// Map each rating to its division:
//   Division 1: rating >= 1900
//   Division 2: 1600 <= rating <= 1899
//   Division 3: 1400 <= rating <= 1599
//   Division 4: rating <= 1399
int main()
{
    // Fast IO. This one actually matters: with up to 10^4 test cases the
    // untied streams save real time versus flushing on every line.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t; // number of test cases
    while (t--)
    {
        int rating;
        cin >> rating;

        // The if/else-if chain is checked highest-threshold-first, which is
        // what lets each branch omit its upper bound. By the time control
        // reaches the 1600 test, we already know rating < 1900, so writing
        // rating >= 1600 implicitly means the range [1600, 1899]. Reversing
        // the order would break this — every rating >= 1400 would match the
        // Division 3 branch first.
        if (rating >= 1900)
            cout << "Division 1\n";
        else if (rating >= 1600)
            cout << "Division 2\n";
        else if (rating >= 1400)
            cout << "Division 3\n";
        else
            cout << "Division 4\n"; // catch-all, also covers negative ratings
    }
    return 0;
}

// Time Complexity:  O(t)
// Space Complexity: O(1)