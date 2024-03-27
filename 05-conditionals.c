/* C if-else example */
#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d is biggest\n", num1);
        num2 = num1;
    }
    else
    {
        printf("%d is biggest\n", num2);
        num1 = num2;
    }

    return 0;
}
