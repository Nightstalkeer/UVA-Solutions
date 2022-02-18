#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int res;
    while (getline(cin, s))
    {
        res = 0;
        vector<int> v(128, 0);

        for (int i = 0; i < s.size(); i++)
        {
            v[s[i]]++;
        }

        for (int i = 'A'; i <= 'Z'; i++)
        {
            v[i] > res ? res = v[i] : 0;
            v[i + 32] > res ? res = v[i + 32] : 0;
        }

        for (int i = 'A'; i <= 'Z'; i++)
        {
            if (v[i] == res)
            {
                cout << (char)i;
            }
        }

        for (int i = 'a'; i <= 'z'; i++)
        {
            if (v[i] == res)
            {
                cout << (char)i;
            }
        }

        cout << " " << res << '\n';
    }
}