/* C program that implements a custom version of a string copy
 * function that takes a destination and a source string and copies
 * the source string to the destination string.
 */
#include <stdio.h>

/* Returns length of a string. */
int string_len(const char *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;

    return len;
}

/* Copies a source string into a destination string. */
void string_copy(char *dest, char *source)
{
    int i;
    int source_len = string_len(source);

    for (i = 0; i < source_len; i++)
    {
        dest[i] = source[i];
    }

    // add the null character
    dest[i] = '\0';
}

void pp(char *dest, char *source)
{
    printf("`%s(%d)` -> `%s(%d)`\n", source, string_len(source), dest, string_len(dest));
}

const int MAX_STR_LEN = 100;

int main(void)
{
    char dest[MAX_STR_LEN];
    char source[MAX_STR_LEN];

    string_copy(source, "hello");

    // test case 1
    string_copy(dest, source);
    pp(dest, source);

    // test case 2
    source[0] = '\0';
    string_copy(dest, source);
    pp(dest, source);

    return 0;
}
