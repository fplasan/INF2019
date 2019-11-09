#include <stdio.h>

int main()
{
  int x = 12, y = 8, menor, mayor, mcd, mcm, i;
  /* modificar para cualquier x, y */
  if (x < y)
    menor = x;
  else
    menor = y;
  for (i = 1; i <= menor; i++)
  {
    if (x % i == 0 && y % i == 0)
    {
      mcd = i;
    }
  }
  printf("mcd= %d\n", mcd);

  if (x < y)
    mayor = y;
  else
    mayor = x;
  i = mayor;
  while (i % x != 0 || i % y != 0)
  {
    i++;
  }
  mcm = i;
  printf("mcm= %d\n", mcm);

  return 0;
}
