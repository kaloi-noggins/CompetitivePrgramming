#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        printf("%d^2 = %1.lf\n", i, pow(i, 2));
    }

    return 0;
}