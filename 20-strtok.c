/* Extract whitespace-delimited tokens from a line of input and print them one per line. */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *whitespace = " \t\f\r\v\n";

    char *token;
    char *line;

    line = malloc(200 * sizeof(char));
    if (line == NULL)
    {
        printf("Error: malloc failed\n");
        exit(1);
    }

    printf("Enter a line of text:\n");
    line = fgets(line, 200 * sizeof(char), stdin);
    if (line == NULL)
    {
        printf("Error: reading input failed, exiting...\n");
        exit(1);
    }
    printf("The input line is:\n%s\n", line);

    token = strtok(line, whitespace);
    while (token != NULL)
    {
        printf("Next token is %s\n", token);
        token = strtok(NULL, whitespace);
    }

    free(line);

    return 0;
}
