#include <bits/stdc++.h>

using namespace std;
bool primo(unsigned long int n);
bool superPrimo(string n);

int main()
{
    unsigned long int n;

    while (scanf("%lu", &n) != EOF)
    {
        /* code */
        stringstream ss;
        ss << n;
        string s = ss.str();

        bool ip = primo(n);
        bool isp = superPrimo(s);

        if (ip && isp)
        {
            cout << "Super" << endl;
        }
        else if (ip)
        {
            cout << "Primo" << endl;
        }
        else
        {
            cout << "Nada" << endl;
        }
    }

    return 0;
}

bool primo(unsigned long int n)
{
    if (n == 0 || n == 1)
        return false;

    for (size_t i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool superPrimo(string n)
{
    for (size_t i = 0; i < n.length(); i++)
    {
        if (n[i] == '0' || n[i] == '1' || n[i] == '4' || n[i] == '6' || n[i] == '8' || n[i] == '9')
        {
            return false;
        }
    }
    return true;
}