#include <stdio.h>

int main(void)
{
    int x, y, temp;
    int *ptr1, *ptr2;

    x = 6;
    y = 7;

    ptr1 = &x;
    ptr2 = &y;

    printf("x = %d, y = %d\n", *ptr1, *ptr2);
    printf("Swapping values...\n");

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("x = %d, y = %d\n", *ptr1, *ptr2);

    return 0;
}
