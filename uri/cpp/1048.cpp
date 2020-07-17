#include <bits/stdc++.h>

using namespace std;

int main()
{
    float sal, percent, reajuste;

    cin >> sal;

    if (sal >= 0 && sal <= 400)
    {
        percent = 0.15;
    }
    else if (sal >= 400.01 && sal <= 800)
    {
        percent = 0.12;
    }
    else if (sal >= 800.01 && sal <= 1200)
    {
        percent = 0.1;
    }
    else if (sal >= 1200.01 && sal <= 2000)
    {
        percent = 0.07;
    }
    else
    {
        percent = 0.04;
    }

    reajuste = sal * percent;
    cout << "Novo salario: " << fixed << setprecision(2) << sal + reajuste << endl
         << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl
         << "Em percentual: " << fixed << setprecision(0) << percent * 100 << " %" << endl;
}