#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for (size_t i = 0; i < 5; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == n)
            count++;
    }
    cout << count << endl;
    return 0;
}