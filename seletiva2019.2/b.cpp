#include <bits/stdc++.h>

using namespace std;

int comp(vector<int> km)
{
    for (int i = km.size(); i < 1; i--)
    {
        if (km[i] - km[i - 1] > 200)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int postos;
    vector<int> km;

    do
    {
        scanf("%d", &postos);
        km.clear();

        for (int i = 0; i < postos; i++)
        {
            int temp;
            cin >> temp;
            km.push_back(temp);
        }

        sort(begin(km), end(km));

        if (postos != 0)
        {
            int result;
            result = comp(km);

            if (result == 1 || postos < 17)
            {
                cout << "Melhor pegar um aviao Jorge" << endl;
            }
            else if (result == 0)
            {
                cout << "Bora viajar rapaziada" << endl;
            }
        }
    } while (postos != 0);

    return 0;
}