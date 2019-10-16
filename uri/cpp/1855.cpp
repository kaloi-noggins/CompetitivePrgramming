#include <bits/stdc++.h>

using namespace std;
vector<vector<char>> mapa;
vector<vector<bool>> flag;
int l, c;

char dfs(int l, int c, int direcao);

int main()
{
    cin >> l >> c;
    mapa.assign(c, vector<char>(l, ' '));
    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < l; j++)
        {
            cin >> mapa[i][j];
        }   
    }

    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < l; j++)
        {
            cout << mapa[i][j];
        }
        cout << endl;
    }
    cout << dfs(0, 0, 0) << endl;
    return 0;
}

char dfs(int lin, int col, int direcao)
{
    if (flag[lin][col] == 1)
    {
        return '!';
    }

    if (mapa[lin][col] == '.')
    {
        switch (direcao)
        {
        case 1:
            if (col > 0)
            {
                return dfs(lin, col - 1, 1);
            }
            return '!';
            break;
        case 2:
            if (lin - 1 > l)
            {
                return '!';
            }
            return dfs(lin + 1, col, 2);
            break;
        case 3:
            if (col - 1 > c)
            {
                return '!';
            }
            return dfs(lin, col + 1, 3);
            break;
        case 4:
            if (lin > 0)
            {
                return dfs(lin - 1, col, 4);
            }
            return '!';
            break;
        }
    }

    flag[lin][col] = 1;

    if (mapa[lin][col] == '^')
    {
        if (col > 0)
        {
            return dfs(lin, col - 1, 1);
        }
        return '!';
    }

    if (mapa[lin][col] == '>')
    {
        if (lin - 1 > l)
        {
            return '!';
        }
        return dfs(lin + 1, col, 2);
    }

    if (mapa[lin][col] == 'v')
    {
        if (col - 1 > c)
        {
            return '!';
        }
        return dfs(lin, col + 1, 3);
    }

    if (mapa[lin][col] == '<')
    {
        if (lin > 0)
        {
            return dfs(lin - 1, col, 4);
        }
        return '!';
    }

    return '*';
}
