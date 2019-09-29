#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    for (size_t i = 0; i < casos; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        cout << __gcd(n1, n2) << endl;
    }
    return 0;
}