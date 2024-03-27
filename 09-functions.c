#include <stdio.h>

/* max: computes the larger of two integer values
 *   x: one integer value
 *   y: another integer value
 *   returns: the larger of x and y
 */
int max(int x, int y)
{
    int bigger;

    bigger = x;
    if (y > x)
    {
        bigger = y;
    }
    printf("  in max, before return x: %d y: %d\n", x, y);
    return bigger;
}

/* prints out the squares from start to stop
 *   start: the beginning of the range
 *   stop: the end of the range
 */
void print_table(int start, int stop)
{
    int i;

    for (i = start; i <= stop; i++)
    {
        printf("%d\t", i * i);
    }
    printf("\n");
}

int main(void)
{
    int val1, val2, result;

    val1 = 6;
    val2 = 10;

    result = max(val1, val2);
    printf("max value is: %d\n", result);

    result = max(11, 3);
    printf("max value is: %d\n", result);

    result = max(val1 * 2, val2);
    printf("max value is: %d\n", result);

    print_table(1, 20);
    print_table(val1, val2);

    return 0;
}
