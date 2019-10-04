#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (size_t i = 1; i <= 9; i += 2)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                cout << "I=" << 1 << " J=" << 1 + 6 - j << endl;
            }
            else
            {
                cout << "I=" << i << " J=" << i + 6 - j << endl;
            }
        }
    }

    return 0;
}