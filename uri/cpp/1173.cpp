#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[10];
    cin >> n;

    arr[0] = n;

    for (size_t i = 1; i < 10; i++)
    {
        arr[i] = 2 * arr[i - 1];
    }

    for (size_t i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}