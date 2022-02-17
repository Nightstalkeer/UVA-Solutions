
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> v(501, vector<int>(501, 0));

int main()
{

    int w, h, n;
    while (cin >> w >> h >> n, w)
    {
        int x1, x2, y1, y2;
        while (n--)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 > x2)
                swap(x1, x2);
            if (y1 > y2)
                swap(y1, y2);

            for (int i = x1 - 1; i < x2; i++)
            {
                for (int j = y1 - 1; j < y2; j++)
                {
                    v[i][j] = 1;
                }
            }
        }

        int c = 0;
        for (int i = 0; i < w; i++)
        {
            for (int j = 0; j < h; j++)
            {
                if (!v[i][j])
                    c++;
                else
                    v[i][j] = 0;
            }
        }

        if (c == 0)
        {
            cout << "There is no empty spots.\n";
        }
        else if (c == 1)
        {
            cout << "There is one empty spot.\n";
        }
        else
        {
            cout << "There are " << c << " empty spots.\n";
        }
    }
}
