#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    while (n != 0)
    {
        for (size_t i = 0; i < 3; i++)
        {
            c++;
            cout << c << " ";
        }
        cout << "PUM" << endl;
        c ++;
        n--;
    }
    return 0;
}