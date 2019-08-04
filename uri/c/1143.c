#include <math.h>
#include <stdio.h>

int main()
{
    int entrada,a,b;
    a=b=entrada=0;
    
    scanf("%d",&entrada);
    
    for (int i = 0; i < entrada; i++)
    {
        a=pow((i+1),2);
        b=pow((i+1),3);
        printf("%d %d %d\n",(i+1),a,b);
    }

    return 0;
}
