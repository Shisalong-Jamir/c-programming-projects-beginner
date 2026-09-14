#include <stdio.h>
int main()
{
    printf("[Program for computing the Universal Product Code's check digit]\n");
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, sum1, sum2, total, check;
    printf("Enter the first digit: ");
    scanf("%d", &d);
    printf("Enter the first five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    sum1= d + i2 + i4 + j1 + j3 + j5;
    sum2= i1 + i3 + i5 + j2 + j4;
    total= (sum1*3)+sum2;
    check= 9-((total-1)%10);
    printf("The check digit is: %d\n", check);
    return 0;
}