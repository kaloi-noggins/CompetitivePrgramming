#include <bits/stdc++.h>

using namespace std;

int main()
{
    int peso, i = 2;
    cin >> peso;

    int primoatual = peso, sum = 0, nprim = 0;
    while (nprim < 10)
    {
        if ((primoatual % i != 0) && ((i + 1) == primoatual))
        {
            sum += primoatual;
            nprim++;
        }
        if (primoatual % i == 0)
        {
            primoatual++;
            i = 2;
        }
        i++;
    }

    cout << sum << " km/h" << endl;
    cout << 60000000 / sum << " h / " << 60000000 / sum / 24 << " d" << endl;

    return 0;
}