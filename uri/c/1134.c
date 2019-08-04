#include <stdio.h>

int main()
{
    int entrada, gasolina, alcool, diesel, cond;
    entrada = gasolina = alcool = diesel = cond = 0;

    while (cond == 0)
    {
        scanf("%i", &entrada);
        if (entrada == 4)
        {
            cond = 1;
        }
        else
        {
            if (entrada == 1)
            {
                alcool++;
            }
            else if (entrada == 2)
            {
                gasolina++;
            }
            else if (entrada == 3)
            {
                diesel++;
            }
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n", alcool, gasolina, diesel);
}