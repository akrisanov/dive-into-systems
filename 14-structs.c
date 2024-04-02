#include <stdio.h>
#include <string.h>

// Define a new type: struct studentT
// Note that struct definitions should be outside function bodies.
struct studentT
{
    char name[64];
    int age;
    float gpa;
    int grad_yr;
};

/* Prints out struct values. */
void printStudent(struct studentT student);

int main(void)
{
    struct studentT student1, student2;

    strcpy(student1.name, "Andrey Krisanov");
    student1.age = 18 + 2;
    student1.gpa = 3.5;
    student1.grad_yr = 2013;

    printStudent(student1);

    /* Copy all the field values of student1 into student2. */
    student2 = student1;

    strcpy(student2.name, "Mark Krisanov");
    student2.gpa = 5.0;
    student2.grad_yr = student1.grad_yr + 17;

    printStudent(student2);

    /* Print the size of the struct studentT type. */
    printf("number of bytes in student struct: %lu\n", sizeof(struct studentT));

    return 0;
}

void printStudent(struct studentT student)
{
    printf("name: %s, age: %d, gpa: %g, year: %d\n",
           student.name, student.age, student.gpa, student.grad_yr);
};
