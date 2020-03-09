#include <bits/stdc++.h>

using namespace std;

int main()
{
    double l, c, r1, r2;

    while (true)
    {
        cin >> l >> c >> r1 >> r2;
        if (l == 0 && c == 0 && r1 == 0 && r2 == 0)
        {
            break;
        }
        else
        {
            if (r1 * 2 <= l && r1 * 2 <= c && r2 * 2 <= l && r2 * 2 <= c)
            {

                if (pow(l - r1 - r2, 2) + pow(c - r1 - r2, 2) >= pow(r1 + r2, 2))
                {
                    cout << 'S' << endl;
                }
                else
                {
                    cout << 'N' << endl;
                }
            }
            else
            {
                cout << 'N' << endl;
            }
        }
    }

    return 0;
}