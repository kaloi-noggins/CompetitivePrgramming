#include <stdio.h>

int main()
{
    double a, b, n;
    scanf("%lf", &n);

    for (int i = 0; i < (int)n; i++)
    {
        scanf("%lf %lf", &a, &b);
        if (b == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n", a / b);
        }
    }
    
    return 0;
}