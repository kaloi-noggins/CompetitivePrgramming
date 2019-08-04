#include <stdio.h>

#define len 20
int array[len];

void inverteArray()
{
    int arrayTemp[len];

    for (int i = 0; i < len; i++)
    {
        arrayTemp[i] = array[(len - 1) - i];
    }
    for (int i = 0; i < len; i++)
    {
        array[i] = arrayTemp[i];
    }
}

int main()
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
    }

    inverteArray();

    for (int i = 0; i < len; i++)
    {
        printf("N[%d] = %d\n", i, array[i]);
    }
    
    return 0;
}