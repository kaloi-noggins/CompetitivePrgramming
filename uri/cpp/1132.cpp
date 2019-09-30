#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, sum = 0;
    cin >> a >> b;

    if (b < a)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (a; a < b + 1; a++)
    {
        if (a % 13 != 0)
        {
            sum += a;
        }
    }
    cout << sum << endl;

    return 0;
}