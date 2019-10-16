#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p[5];

    for (size_t i = 0; i < 5; i++)
    {
        cin >> p[i];
    }

    cout << p[0] * 300 + p[1] * 1500 + p[2] * 600 + p[3] * 1000 + p[4] * 150 + 225 << endl;

    return 0;
}