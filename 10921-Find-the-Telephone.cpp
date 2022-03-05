#include <bits/stdc++.h>

using namespace std;

int main()
{
    int con[91];
    con['A'] = '2';
    con['B'] = '2';
    con['C'] = '2';

    con['D'] = '3';
    con['E'] = '3';
    con['F'] = '3';

    con['G'] = '4';
    con['H'] = '4';
    con['I'] = '4';

    con['J'] = '5';
    con['K'] = '5';
    con['L'] = '5';

    con['M'] = '6';
    con['N'] = '6';
    con['O'] = '6';

    con['P'] = '7';
    con['Q'] = '7';
    con['R'] = '7';
    con['S'] = '7';

    con['T'] = '8';
    con['U'] = '8';
    con['V'] = '8';

    con['W'] = '9';
    con['X'] = '9';
    con['Y'] = '9';
    con['Z'] = '9';

    con['0'] = '0';
    con['1'] = '1';
    con['-'] = '-';

    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = con[s[i]];
        }
        cout << s << endl;
    }
}