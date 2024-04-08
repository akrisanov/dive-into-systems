#include <stdio.h>

int main(void)
{
    int i;
    int s_array[20];
    int *d_array; // holds the base address of the dynamic array in memory

    d_array = malloc(sizeof(int) * 20);
    if (d_array == NULL)
    {
        printf("Error: malloc failed\n");
        exit(1);
    }

    for (i = 0; i < 20; i++)
    {
        s_array[i] = i;
        d_array[i] = i;
    }

    printf("%d %d", s_array[3], d_array[3]);

    return 0;
}
