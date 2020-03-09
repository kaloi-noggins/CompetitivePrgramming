#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h0, m0, h1, m1, t0, t1, delta;
    cin >> h0 >> m0 >> h1 >> m1;

    t0 = h0 * 60 + m0;
    t1 = h1 * 60 + m1;

    delta = t1 - t0;

    cout << t0 << " " << t1 << " " << delta << endl;

    if (delta <= 0)
    {
        delta += 1440;
    }
    
    cout << delta << endl;
    int horas = (delta - delta % 60) / 60;
    int minutos = (delta - delta % 24) / 24;
    cout << horas << " "  << minutos << endl;

    return 0;
}