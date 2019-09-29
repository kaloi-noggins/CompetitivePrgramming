#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    double n, m;
    cin >> c;
    for (size_t i = 0; i < c; i++)
    {
        cin >> n >> m;
        cout << ceil(n / m) << endl;
    }

    return 0;
}