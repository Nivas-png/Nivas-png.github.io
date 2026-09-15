#include <stdio.h>

int main() {
    char name;
    int age;
    float cgpa;

    printf("Enter the first character of your name: ");
    scanf(" %c", &name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("\nStudent Details\n");
    printf("Name first character: %c\n", name);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}