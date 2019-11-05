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
            double sum, hip;
            sum = 2 * r1 + 2 * r2;
            hip = (int)sqrt(pow(l, 2) + pow(c, 2));
            // cout << l << " " << c << " " << r1 << " " << r2 << " " << endl
            //      << hip << " " << sum << endl;
            if ((sum < l || sum < c || sum < hip) && (r1 <= l && r1 <= c && r2 <= l && r2 <= c))
            {
                cout << 'S' << endl;
            }
            else
            {
                cout << 'N' << endl;
            }
        }
    }

    return 0;
}