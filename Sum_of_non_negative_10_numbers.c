#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num < 0) {
            printf("Negative number ignored.\n");
            continue; // Skips the rest of the loop body for this iteration
        }

        sum += num;
        printf("Added: %d (Current Sum: %d)\n", num, sum);
    }

    printf("\nTotal sum of non-negative numbers: %d\n", sum);

    return 0;
}
