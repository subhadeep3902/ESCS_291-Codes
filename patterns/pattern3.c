#include <stdio.h>
int main()
{
  int n, i, j, k, p, q;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("\n");
  for (i = 1; i <= n; i++)
  {
    for (k = 1; k <= n - i; k++)
      printf("   ");
    p = i;
    for (j = 1; j <= i; j++)
      printf("%3d", p++);
    q = (i * 2) - 2;
    for (j = 1; j <= i - 1; j++)
      printf("%3d", q--);
    printf("\n");
  }
  return 0;
}
