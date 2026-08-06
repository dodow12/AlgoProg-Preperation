#include <stdio.h>

int main()
{
    // title
    printf("==== Fibonacci Sequence Generator ====\n");

    // what is a fibonacci sequence?
    /*
    basically its a seuquence that starts with 0 and 1, and continues
    with each number being the sum of the 2 numbers previous to itself
    */

    // data
    int length;
    int a = 0;
    int b = 1;

    // input data
    printf("Insert length of sequence: ");
    scanf("%i", &length);

    // process
    while (length > 0)
    {
        printf("%i, ", a);

        b = a + b;
        a = b - a;

        length--;
    }
}