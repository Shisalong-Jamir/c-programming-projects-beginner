/*Program to take input of 1-16 (random) from user and create a 4x4 arrangement, and calculate sum of row, column and diagonals*/
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4;
    int n5, n6, n7, n8;
    int n9, n10, n11, n12;
    int n13, n14, n15, n16;printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
        &n1, &n2, &n3, &n4,
        &n5, &n6, &n7, &n8,
        &n9, &n10, &n11, &n12,
        &n13, &n14, &n15, &n16);
    printf("\n");
    printf("The 4x4 arrangment is: \n");
    printf("%4d%4d%4d%4d\n", n1, n2, n3, n4);
    printf("%4d%4d%4d%4d\n", n5, n6, n7, n8);
    printf("%4d%4d%4d%4d\n", n9, n10, n11, n12);
    printf("%4d%4d%4d%4d\n", n13, n14, n15, n16);
    printf("\n");
    printf("The sum of rows are: \n");
    printf("%4d%4d%4d%4d\n", 
        n1+n2+n3+n4, 
        n5+n6+n7+n8, 
        n9+n10+n11+n12, 
        n13+n14+n15+n16);
    printf("\n");
    printf("The sum of columns are: \n");
    printf("%4d\n%4d\n%4d\n%4d\n", 
        n1+n5+n9+n13, 
        n2+n6+n10+n14, 
        n3+n7+n11+n15, 
        n4+n8+n12+n16);
    printf("\n");
    printf("The sum of diagonals are: \n");
    printf("%4d\t%4d\n", 
        n1+n6+n11+n16, 
        n4+n7+n10+n13);
    return 0;

    }
