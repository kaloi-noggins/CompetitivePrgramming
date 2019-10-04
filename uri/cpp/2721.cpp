#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0;

    for (size_t i = 0; i < 9; i++)
    {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }

    int resto = sum % 9;
    string nome;
    switch (resto)
    {
    case 0:
        nome = "Rudolph";
        break;
    case 1:
        nome = "Dasher";
        break;
    case 2:
        nome = "Dancer";
        break;
    case 3:
        nome = "Prancer";
        break;
    case 4:
        nome = "Vixen";
        break;
    case 5:
        nome = "Comet";
        break;
    case 6:
        nome = "Cupid";
        break;
    case 7:
        nome = "Donner";
        break;
    case 8:
        nome = "Blitzen";
        break;
    }

    cout << nome << endl;
    return 0;
}