#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    for (size_t i = 0; i < 6; i++)
    {
        double tmp;
        cin >> tmp;
        if (tmp > 0)
            count++;
    }
    cout << count << " valores positivos"<< endl;
    return 0;
}