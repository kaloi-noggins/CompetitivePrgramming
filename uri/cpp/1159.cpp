#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    bool flag = true;
    while (flag)
    {
        cin >> n;
        if (n != 0)
        {
            int sum = 0, quant = 0;
            for (n; quant < 5; n++)
            {
                if (n % 2 == 0)
                {
                    sum += n;
                    quant++;
                }
            }
            cout << sum << endl;
        }
        else
        {
            flag = false;
        }
    }

    return 0;
}