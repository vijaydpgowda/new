include <stdio.h>

int fact1()
{
  int c, n, fact1 = 1;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
    fact1 = fact1 * c;

  printf("Factorial of %d = %d\n", n, fact1);

  return 0;
}

