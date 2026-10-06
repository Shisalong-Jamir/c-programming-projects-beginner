#include <stdio.h>

int main() 
{
    int odd, even;
    printf("[First 10 ODD and EVEN numbers]\n");
    printf("\n[EVEN NUMBERS]\n");
    for (even = 2; even <= 20; even += 2) {
        printf("%d\n", even);
    }
    printf("\n[ODD NUMBERS]\n");
    for (odd = 1; odd <=20; odd +=2) {
        printf("%d\n", odd);
    }
    return 0;
}
