#include <bits/stdc++.h>

using namespace std;

int main()
{
    int validas = 0;
    double notas = 0;

    while (validas < 2)
    {
        double tmp;
        cin >> tmp;
        if (tmp >= 0 && tmp <= 10)
        {
            notas += tmp;
            validas++;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }

    cout << fixed << setprecision(2) << "media = " << notas / 2 << endl;

    return 0;
}