#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;

    for (size_t i = 0; i < 5; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 0)
            count++;
    }
    cout << count << " valores pares" << endl;
    return 0;
}