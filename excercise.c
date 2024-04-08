#include <stdio.h>

int main(void)
{
    int x, y, *ptr1, *ptr2;

    x = 2;
    y = 10;

    ptr1 = &x;   // -> x -> 2
    ptr2 = ptr1; // -> x -> 2

    *ptr1 = 6; // x = 6
    ptr1 = &y; // -> y -> 10

    printf("*ptr1=%d *ptr2=%d\n", *ptr1, *ptr2);
}
