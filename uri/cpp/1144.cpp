#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (size_t i = 1; i < n+1; i++)
    {
        cout << i << " " << i * i << " " << i * i * i << endl;
        cout << i << " " << i * i + 1 << " " << i * i * i + 1 << endl;
    }
 
    return 0;
}