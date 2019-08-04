#include <stdio.h>

int main()
{
    int cont=0,n=0;
    scanf("%d",&n);
    for (int i = n; cont < 6; i++)
    {
        if (i%2!=0)
        {
            cont++;
            printf("%d\n",i);
        }
    }
    
    return 0;
}