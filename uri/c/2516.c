#include <stdio.h>

int main()
{
    float s, va, vb;
    while (scanf("%f %f %f", &s, &va, &vb) == 3)
    {
        if (va > vb)
        {
            printf("%.2f\n", s / (va - vb));
        }
        else
        {
            printf("impossivel\n");
        }
    }
    return 0;
}