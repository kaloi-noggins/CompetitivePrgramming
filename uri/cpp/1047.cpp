#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h0, m0, h1, m1, t;
    cin >> h0 >> m0 >> h1 >> m1;

    if (h0 < h1)
    {
        t = (h1 - h0) * 60;
    }
    else
    {
        t = (24 - h0 + h1) * 60;
    }

    if (m0 < m1)
    {
        t += m1 - m0;
    }
    else
    {
        t += 60 - m0 + m1;
    }

    if (m0 > m1 || m0 == m1)
    {
        t -= 60;
    }

    if (h0 > h1 || h0 == h1)
    {
        t -= 60 * 24;
    }

    if (h0 == h1 && m0 == m1)
    {
        t += 60 * 24;
    }

    if (t < 0)
    {
        t *= -1;
    }
    cout
        << "O JOGO DUROU "
        << (t - t % 60) / 60
        << " HORA(S) E "
        << t % 60
        << " MINUTO(S)"
        << endl;
    return 0;
}