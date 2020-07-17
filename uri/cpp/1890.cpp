#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    double c, d;
    cin >> a;
    for (size_t i = 0; i < a; i++)
    {
        cin >> c >> d;
        if (c == 0 && d == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << fixed << setprecision(0) << pow(26, c) * pow(10, d) << endl;
        }
    }
}