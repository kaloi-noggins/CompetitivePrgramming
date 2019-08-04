#include <stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    for (int i = 0; i < a+1; i++)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}