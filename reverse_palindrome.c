#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;
    printf("[REVERSE, PALINDROME]\n");
    printf("\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    for (remainder = num; remainder != 0; remainder /= 10) {
        reversed = reversed * 10 + (remainder % 10);
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
