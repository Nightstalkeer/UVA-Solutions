#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long res = 0, x, z;
    int y;

    while (n--)
    {
        cin >> x >> y >> z;
        res += (x * z);
    }
    cout << res << endl;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}