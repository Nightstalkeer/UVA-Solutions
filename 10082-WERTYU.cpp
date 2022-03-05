#include <bits/stdc++.h>

using namespace std;

int main()
{
    int con[128];
    con['W'] = 'Q';
    con['E'] = 'W';
    con['R'] = 'E';
    con['T'] = 'R';
    con['Y'] = 'T';
    con['U'] = 'Y';
    con['I'] = 'U';
    con['O'] = 'I';
    con['P'] = 'O';
    con['['] = 'P';
    con[']'] = '[';
    con['\\'] = ']';

    con['S'] = 'A';
    con['D'] = 'S';
    con['F'] = 'D';
    con['G'] = 'F';
    con['H'] = 'G';
    con['J'] = 'H';
    con['K'] = 'J';
    con['L'] = 'K';
    con[';'] = 'L';
    con['\''] = ';';

    con['X'] = 'Z';
    con['C'] = 'X';
    con['V'] = 'C';
    con['B'] = 'V';
    con['N'] = 'B';
    con['M'] = 'N';
    con[','] = 'M';
    con['.'] = ',';
    con['/'] = '.';

    con['1'] = '`';
    con['2'] = '1';
    con['3'] = '2';
    con['4'] = '3';
    con['5'] = '4';
    con['6'] = '5';
    con['7'] = '6';
    con['8'] = '7';
    con['9'] = '8';
    con['0'] = '9';
    con['-'] = '0';
    con['='] = '-';
    con[' '] = ' ';

    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = con[s[i]];
        }
        cout << s << "\n";
    }
}