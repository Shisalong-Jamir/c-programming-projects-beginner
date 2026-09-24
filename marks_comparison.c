/*Program to compare the marks of two students*/
#include <stdio.h>
int main()
{
    int mark1, mark2;
    printf("[MARKS COMPARISON]\n");
    printf("Enter the marks scored by student 1: ");
    scanf("%d", &mark1);
    printf("Enter the marks scored by student 2: ");
    scanf("%d", &mark2);
    (mark1==mark2)
        ? printf("Both students scored the same marks.")
        : (mark1>mark2)
            ? printf("Student 1 scored higher than student 2.")
            : printf("Student 2 scored higher than student 1.");
            
    return 0;
}