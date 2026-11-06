/*
https://codeforces.com/contest/791/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

// Limak weighs a, Bob weighs b, and initially a <= b. Every year Limak's
// weight triples while Bob's only doubles. Print the first year in which
// Limak is strictly heavier.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b; // a = Limak's weight, b = Bob's weight
    int years = 0;

    // Loop while Limak has NOT yet overtaken Bob. The condition is <= rather
    // than < because equal weights don't count as "bigger" — the problem asks
    // for strictly greater, so a == b must trigger one more year.
    //
    // This always terminates: the ratio a/b multiplies by 3/2 > 1 each pass,
    // so it grows without bound and eventually exceeds 1.
    while (a <= b)
    {
        a *= 3; // Limak triples
        b *= 2; // Bob doubles
        years++;
    }

    cout << years << "\n";
    return 0;
}

// Time Complexity:  O(log(b/a))
// Space Complexity: O(1)