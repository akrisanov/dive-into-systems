#include <stdio.h>

int change_value(int *input);

int main(void)
{
    int x, y;

    x = 30;
    y = change_value(&x);

    printf("x = %d, y = %d\n", x, y); // x = 100, y = 30

    return 0;
}

/* changes the value of the argument */
int change_value(int *input)
{
    int val;

    val = *input;

    if (val < 100)
    {
        *input = 100;
    }
    else
    {
        *input = val * 2;
    }

    return val;
}
