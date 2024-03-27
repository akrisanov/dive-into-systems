/* C printf example */
#include <stdio.h>

int main(void)
{
  printf("Name: %s, Info:\n", "Mark");
  printf("\tAge: %d \t Ht: %g\n", 20, 1.84);
  printf("\tYear: %d \t Dorm: %s\n", 3, "Alice Paul");

  char ch = 'A';
  printf("ch value is %d which is the ASCII value of %c\n", ch, ch);

  ch = 99;
  printf("ch value is %d which is the ASCII value of %c\n", ch, ch);
}
