#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool proceed;
    proceed = true;
    do
    {
        int tmp;
        cin >> tmp;
        if (tmp == 2002)
        {
            cout << "Acesso Permitido" << endl;
            proceed = false;
        }
        else
        {
            cout << "Senha Invalida" << endl;
            proceed = true;
        }

    } while (proceed);
    return 0;
}