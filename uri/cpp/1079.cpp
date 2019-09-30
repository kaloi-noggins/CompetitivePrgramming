#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        double a, b, c;
        cin >> a >> b >> c;

        cout << fixed << setprecision(1) << (((2 * a) + (3 * b) + (5 * c)) / 10) << endl;
    }

    return 0;
}