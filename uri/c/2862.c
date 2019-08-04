#include <stdio.h>

int len;

int main()
{
    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > 8000)
        {
            printf("Mais de 8000!\n");
        }
        else
        {
            printf("Inseto!\n");
        }
    }
    return 0;
}