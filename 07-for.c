#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a value: ");
    scanf("%d", &num);

    // make sure num is not negative
    if (num < 0)
    {
        num = -num;
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
