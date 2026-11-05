/*
https://codeforces.com/contest/546/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, w;
    cin >> k >> n >> w;
    int total = k * w * (w + 1) / 2; // total cost of w bananas formula = k * (1 + 2 + ... + w) = k * (w*(w+1)/2)
    cout << max(0, total - n) << "\n";
    return 0;
}


// The i-th banana costs i*k dollars, so w bananas cost k*(1+2+...+w).
// The soldier has n dollars; print how much he must borrow, or 0 if he
// already has enough.
int main()
{
    // Untie C++ streams from C stdio and from each other. Pure speed setup —
    // irrelevant at these input sizes (three numbers), but harmless habit.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long k, n, w;
    cin >> k >> n >> w; // k = base cost, n = money on hand, w = bananas wanted
    long dollars_needed = 0;

    // Accumulate the total price. Banana number i costs exactly i*k, so this
    // builds k * (w*(w+1)/2) one term at a time.
    for (long i = 1; i <= w; i++)
    {
        dollars_needed += i * k;
    }

    long money_short = dollars_needed - n;

    // The shortfall can be negative when he already has surplus cash, and the
    // problem wants 0 in that case rather than a negative number — hence the
    // explicit branch instead of just printing the difference.
    if (money_short > 0)
    {
        cout << money_short << "\n";
    }
    else
    {
        cout << "0\n";
    }

    return 0;
}

// Time Complexity:  O(w)
// Space Complexity: O(1)