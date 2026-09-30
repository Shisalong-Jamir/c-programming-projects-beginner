/*Program to take three numbers as input and determine the largest number*/
#include <stdio.h>
int main()
{
    int a, b, c, big;
    printf("Enter the three numbers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);
    (a>b && a>c)
        ? (big=a)
        : (b>c)
            ? (big=b)
            : (big=c);
           
    printf("The Largest number among the three is %d", big);
    return 0;
}