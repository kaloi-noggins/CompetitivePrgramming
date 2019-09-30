#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    double ratos, coelhos, sapos, total;
    ratos = coelhos = sapos = total = 0;

    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int cobaias;
        char tipo;

        cin >> cobaias >> tipo;
        total += cobaias;

        switch (tipo)
        {
        case 'C':
            coelhos += cobaias;
            break;
        case 'R':
            ratos += cobaias;
            break;
        case 'S':
            sapos += cobaias;
            break;
        }
    }

    cout << "Total: " << total << " cobaias" << endl
         << "Total de coelhos: " << coelhos << endl
         << "Total de ratos: " << ratos << endl
         << "Total de sapos: " << sapos << endl
         << fixed << setprecision(2)
         << "Percentual de coelhos: " << (coelhos / total) * 100 << " %" << endl
         << "Percentual de ratos: " << (ratos / total) * 100 << " %" << endl
         << "Percentual de sapos: " << (sapos / total) * 100 << " %" << endl;

    return 0;
}