#include <stdio.h>
#include <string.h>

//incompleto
int main()
{

    int n, k;
    char tags[201], aux[50];

    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &k);
        fgets(tags, sizeof(tags), stdin);
        tags[strlen(tags) - 1] = '\0';

        if (k == 0)
        {
            for (size_t s = 0; s < strlen(tags); s++)
            {
                int aberto, fechado;
                aberto = fechado = 1;

                if ((strcmp(tags[s], "<") == 0) & (aberto == 0))
                {
                    printf("error\n");
                    /*setar s para tamanho da string para sair da repetição*/
                    s = strlen(tags);
                }
                else
                {
                    aberto == 0;
                }

                if ((strcmp(tags[s], ">") == 0) & (fechado == 0))
                {
                    printf("error\n");
                    s = strlen(tags);
                }
                else
                {
                    fechado == 0;
                }

                if ((aberto == fechado == 0) & ((s + 1) == strlen(tags)))
                {
                    printf("Successful!!");
                }

                if ((aberto == fechado == 0))
                {
                    aberto == fechado == 1;
                }
            }
        }
        else
        {
            /* code */
        }
    }

    return 0;
}