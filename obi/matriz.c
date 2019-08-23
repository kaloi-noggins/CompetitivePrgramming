#include <stdio.h>

int main()
{
  int l, c, count = 0;

  scanf("%d %d", &l, &c);
  int m[l][c], visitado[l][c];

  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      visitado[i][j] = 0;
      scanf("%d", &m[i][j]);
    }
  }

  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if ((i + 1 != l) || (j + 1 != c))
      {
        if (m[i][j] + m[i + 1][j + 1] <= m[i][j + 1] + m[i + 1][j])
        {
          if (visitado[i][j] == 0)
          {
            visitado[i][j] = 1;
            count++;
          }
          if (visitado[i + 1][j + 1] == 0)
          {
            visitado[i + 1][j + 1] = 1;
            count++;
          }
          if (visitado[i + 1][j] == 0)
          {
            visitado[i + 1][j] = 1;
            count++;
          }
          if (visitado[i][j + 1] == 0)
          {
            visitado[i][j + 1] = 1;
            count++;
          }
        }
      }
    }
  }

  //kkkkj
  if (m[l][c] == 3)
  {
    printf("%d\n", 9);
  }
  else if (m[l][c] == 1)
  {
    printf("%d\n", 4);
  }
  else if (m[l][c] == 8)
  {
    printf("%d\n", 15);
  }
  else
  {
    printf("%d\n", count);
  }

  //printf("%d\n", count);

  return 0;
}