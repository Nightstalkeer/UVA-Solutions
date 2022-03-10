#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int flag = 0;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '\"' && flag == 1)
            {
                flag = 0;
                cout << "\'\'";
            }
            else if (s[i] == '\"' && flag == 0)
            {
                flag++;
                cout << "``";
            }
            else
                cout << s[i];
        }
        cout << endl;
    }
}