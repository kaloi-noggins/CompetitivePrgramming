#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cont = 0;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        if (p != 1)
        {
            cont++;
        }
    }

    cout << cont << endl;
    
    return 0;
}