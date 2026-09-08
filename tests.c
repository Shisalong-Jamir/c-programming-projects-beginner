#include <stdio.h>
int main(void)
{
    float i;
    scanf("%f ", &i); //The space after %f is intentional to consume any whitespace characters after the floating input.
    printf("%f\n", i);
    return 0;
}