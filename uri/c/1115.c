#include <stdio.h>

int main()
{

    int x, y, cond;
    x = y = cond = 0;

    while (cond == 0)
    {
        scanf("%d %d", &x, &y);
        if ((x == 0) || (y == 0))
        {
            cond = 1;
        }
        else
        {
            if (x > 0)
            {
                if (y > 0)
                {
                    printf("primeiro\n");
                }
                else
                {
                    printf("quarto\n");
                }
            }
            else
            {
                if (y > 0)
                {
                    printf("segundo\n");
                }
                else
                {
                    printf("terceiro\n");
                }
            }
        }
    }

    return 0;
}