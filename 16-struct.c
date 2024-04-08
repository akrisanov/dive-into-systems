#include <stdio.h>
#include <string.h>

struct houseT
{
    int number;
    int age;
    char color[6];
    char street[20];
};

void set_color(struct houseT house1, char *new_color)
{
    strncpy(house1.color, new_color, 6);
    house1.color[5] = '\0';
}

int main(void)
{
    struct houseT blue_house;

    strcpy(blue_house.color, "red");
    set_color(blue_house, "blue");
    // since set_color does not receive a pointer to a houseT stuct,
    // it will not modify the passed struct!
    printf("%s\n", blue_house.color);

    return 0;
}
