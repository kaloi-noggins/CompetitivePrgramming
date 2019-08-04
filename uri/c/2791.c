#include <stdio.h>
#define len 4
int main()
{

    int arr[len];

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 1)
        {
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}