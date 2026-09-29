/*Program to check the percentage and score of a student to decide whether the student passes or fails*/
#include <stdio.h>

int main()
{
    int attendence, marks;
    printf("Enter your attendence percentage: ");
    scanf("%d", &attendence);
    printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("\n");
    printf("Student has a Score of %d, while maintaining an attendence of %d%\n", marks, attendence);
    printf("\n");
    if (attendence>=75 && marks>=45) {
        printf("Verdict: Passed, Qualified for Promotion");
    }
    else {
        printf("Verdict: Failed, Detained");
    }
    return 0;
}