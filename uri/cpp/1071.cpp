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
    a++;
    for (a + 1; a < b; a++)
    {
        if (a % 2 != 0)
        {
            sum += a;
        }
    }
    cout << sum << endl;

    return 0;
}