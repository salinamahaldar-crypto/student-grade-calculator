#include <stdio.h>
int main()
{
    float marks;
     printf("Welcome to Student Grade Calculator!!!\n ");
    printf("Enter your marks: ");
    scanf("%f", &marks);
    if (marks >= 90)
        printf("Grade: A");
    else if (marks >= 75)
        printf("Grade: B");
    else if (marks >= 60)
        printf("Grade: C");
    else if (marks >= 40)
        printf("Grade: D");
    else
        printf("Grade: F");
    return 0;
}