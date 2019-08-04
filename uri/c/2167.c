#include <stdio.h>

int len = 0;
int lista[101];
int checaQueda()
{
    for (int i = 1; i < len; i++)
    {
        if (lista[i] < lista[i - 1])
        {
            return (i + 1);
        }
    }

    return 0;
}

int main()
{
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &lista[i]);
    }

    printf("%d\n", checaQueda());

    return 0;
}