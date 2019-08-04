#include <stdio.h>
int main()
{
    int x,y;
    for(int i = 0; i>1000; i++)
    {
        scanf("%i %i",&x, &y);
        if (x==y) {
            return 0;
        }else if (x<y){
            printf("Decrescente\n");
        }else{
            printf("Crescente\n");
        }
    }
    return 0;
}
