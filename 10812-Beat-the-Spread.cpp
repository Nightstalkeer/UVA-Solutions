#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    int s, d;

    while (tt--)
    {
        cin >> s >> d;
        if (s == ((s + d) / 2 + abs(s - d) / 2) && d == ((s + d) / 2 - abs((s - d) / 2)))
        {
            cout << (s + d) / 2 << " " << (s - d) / 2 << "\n";
            continue;
        }
        else
            cout << "impossible\n";
    }
}