#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1, x1, y1, r2, x2, y2;

    while (scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF)
    {

        if ((sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))+r2) <= r1)
        {
            cout << "RICO" << endl;
        }
        else
        {
            cout << "MORTO" << endl;
        }
    }

    return 0;
}