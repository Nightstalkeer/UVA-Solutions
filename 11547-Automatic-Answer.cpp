#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long result = abs(((n * 63 + 7492) * 5 - 498) / 10);
    cout << result % 10 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}