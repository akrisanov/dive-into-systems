#include <stdio.h>

int main(void)
{
  int x;
  float pi;

  printf("Enter two numbers - a decimal and a float: ");
  scanf("%d%g", &x, &pi);
  printf("x = %d, pi = %g\n", x, pi);

  return 0;
}
