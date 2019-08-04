#include<stdio.h>

int main()
{
    int entrada, resultado;
    
    scanf("%i", &entrada);

    for (int i = 0; i < 10; i++)
    {
       resultado=entrada*(i+1);
       printf("%i x %i = %i\n",(i+1),entrada,resultado);
    }
    
    return 0;
}
