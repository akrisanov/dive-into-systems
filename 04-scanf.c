/* C input (scanf) example */

#include <stdio.h>
int main(void)
{
  int num1, num2;

  printf("Enter a number: ");
  scanf("%d", &num1);

  printf("Enter another: ");
  scanf("%d", &num2);

  int sum = num1 + num2;
  printf("%d + %d = %d\n", num1, num2, sum);

  return 0;
}
