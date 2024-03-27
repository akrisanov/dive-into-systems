/* An example of a more complex for loop which uses multiple variables.
 * (it is unusual to have for loops with multiple statements in the
 * init and step parts, but C supports it and there are times when it
 * is useful...don't go nuts with this just because you can)
 */
#include <stdio.h>

int main(void)
{
    for (int i = 0, j = 0; i < 10; i += 1, j += 10)
    {
        printf("i + j = %d\n", i + j);
    }

    return 0;
}
