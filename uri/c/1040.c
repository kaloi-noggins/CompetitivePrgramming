#include <stdio.h>
#include <math.h>

int main()
{
    double n1, n2, n3, n4, media, exame, mediafinal, sum;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    n1 = 2 * n1;
    n2 = 3 * n2;
    n3 = 4 * n3;
    sum = n1 + n2 + n3 + n4;
    media = sum / 10;
    printf("Media: %.1lf\n", media);
    if (media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        mediafinal = (media + exame) / 2;
        if (mediafinal > 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", mediafinal);
    }
    return (0);
}