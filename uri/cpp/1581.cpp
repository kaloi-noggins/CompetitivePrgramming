#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    cin >> a;

    for (size_t i = 0; i < a; i++)
    {
        cin >> b;
        vector<string> palavras;
        for (size_t j = 0; j < b; j++)
        {
            string p;
            cin >> p;
            palavras.push_back(p);
        }
        string result;
        for (size_t i = 0; i < palavras.size(); i++)
        {
            if (i == 0)
            {
                result = palavras[i];
            }
            else
            {
                if (result != palavras[i - 1])
                {
                    result = "ingles";
                    break;
                }
            }
        }
        cout << result << endl;
    }
}