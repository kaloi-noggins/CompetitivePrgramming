#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  double temp, menor, g, p;

  for (int i = 0; i < n; i++)
  {
    scanf("%lf %lf", &p, &g);
    temp = (p / g) * 1000;
    if (i == 0)
    {
      menor = temp;
    }

    if (temp < menor)
    {
      menor = temp;
    }
  }
  printf("%.2lf\n", menor);

  return 0;
}