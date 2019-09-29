#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> num, num1;
    int a, b, c;

    cin >> a >> b >> c;
    num.push_back(a);
    num.push_back(b);
    num.push_back(c);

    num1.push_back(a);
    num1.push_back(b);
    num1.push_back(c);

    sort(num.begin(), num.end());

    cout << num[0] << endl
         << num[1] << endl
         << num[2] << endl;
    cout << endl;
    cout << num1[0] << endl
         << num1[1] << endl
         << num1[2] << endl;

    return 0;
}