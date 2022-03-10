#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, c, d;
    int res;
    while (cin >> a >> b >> c >> d && !(a == 0 && b == 0 && c == 0 && d == 0))
    {
        res = 1080;
        res += ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9;
        cout << res << endl;
    }
}

int main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}