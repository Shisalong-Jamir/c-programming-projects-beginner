#include <stdio.h>

int main(void) {
    int a = 4;
    int b = 7;

    // Step 1: Prefix increment combined with postfix decrement
    int x = ++a + b--;

    // Step 2: Using the updated values
    int y = a++ * --b;

    // Step 3: Combined in a single expression
    int z = --a + b++;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("final a = %d, final b = %d\n", a, b);

    return 0;
}