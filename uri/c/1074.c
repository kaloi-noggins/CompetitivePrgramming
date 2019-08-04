#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        int b;
        scanf("%d",&b);
        if (b==0)
        {
            printf("NULL\n");
        }else
        {
            if (b>0)
            {
                if (b%2==0)
                {
                    printf("EVEN POSITIVE\n");
                }else
                {
                    printf("ODD POSITIVE\n");
                }
                
                
            }else
            {
                if (b%2==0)
                {
                    printf("EVEN NEGATIVE\n");
                }else
                {
                    printf("ODD NEGATIVE\n");
                }
            }      
        }   
    }
    return 0;
}