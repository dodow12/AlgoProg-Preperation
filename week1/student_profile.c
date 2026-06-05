#include <stdio.h>

int main()
{
    // variables
    char name[20];
    int age;
    float height;

    printf("==== STUDENT PROFILE ===="); // title
    // request name
    printf("\nEnter name: ");
    scanf("%19s", name); // limits to 19 char cause thats all the array can store (19char + 1 null terminator)
    // request age
    printf("Enter age: ");
    scanf("%d", &age);
    // request height
    printf("Enter height: ");
    scanf("%f", &height);

    printf("\n==== PROFILE ====");
    printf("\nName: %s", name);
    printf("\nAge: %d", age);
    printf("\nHeight: %.1f", height); // learnt smt new = u can do %.1 to make it 1 number after decimal point
    return 0;
}
