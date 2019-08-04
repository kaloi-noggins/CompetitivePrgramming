#include <stdio.h>
#include <math.h>
int main()
{
    int t = 0;

    scanf("%d", &t);

    int n = 0;

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int soma = 0;
        for (int j = 0; j < n; j++)
        {
            soma += pow(2, j);
        }
        printf("%d\n", soma);
    }

    return 0;
}