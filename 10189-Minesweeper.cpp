#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for (int hash = 1; row && col; hash++)
    {
        if (hash > 1)
            cout << "\n";
        vector<vector<int>> v(row + 2, vector<int>(col + 2, 0));

        for (int r = 1; r <= row; r++)
        {
            string line;
            cin >> line;
            for (int c = 1; c <= col; c++)
            {
                if (line[c - 1] == '*')
                {
                    v[r][c] = 9;
                    for (int tx = -1; tx < 2; tx++)
                    {
                        for (int ty = -1; ty < 2; ty++)
                        {
                            v[r + tx][c + ty]++;
                        }
                    }
                }
            }
        }

        cout << "Field #" << hash << ":\n";
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                if (v[i][j] > 8)
                {
                    cout << "*";
                }
                else
                    cout << v[i][j];
            }
            cout << "\n";
        }
        cin >> row >> col;
    }
}