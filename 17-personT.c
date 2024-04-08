#include <stdio.h>
#include <string.h>

struct personT
{
    char name[50];
    int age;
    float height;
};

int main(void)
{
    struct personT mark;

    strcpy(mark.name, "Mark");
    mark.age = 18;
    mark.height = 1.85;

    printf("%s\n", mark.name);
    return 0;
}
