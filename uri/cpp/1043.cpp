#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c;

    cin >> a >> b >> c;

    if ((a + b <= c) || (b + c <= a) || (a + c <= b))
    {
        cout << "Area = ";
        printf("%.1f", ((a + b) * c) / 2);
        cout << endl;
    }
    else
    {

        cout << "Perimetro = ";
        printf("%.1f", a + b + c);
        cout << endl;
    }

    return 0;
}