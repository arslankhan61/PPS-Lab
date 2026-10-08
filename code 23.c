#include <stdio.h>

int main()

{   float marks;
    printf("Enter Marks (0-100): ");
    scanf("%f", &marks);
    if(marks < 0 || marks > 100)
       {
          printf("Invalid Marks.\n");
       }
    else if(marks >= 90)
       {

        printf("Result: Pass with distinction\n");
        printf("Grade: A+\n");
       }
    else if(marks >= 80)
        {printf("Result: Pass\n");
        printf("Grade: A\n");}
    else if(marks >= 70)
       {

        printf("Result: Pass\n");
        printf("Grade: B+\n");}
    else if(marks >= 60)

    {
        printf("Result: Pass\n");
        printf("Grade: B\n");

    }
    else if(marks >= 50)
        {printf("Result: Pass\n");
        printf("Grade: C\n");}
    else if(marks >= 40)
        {printf("Result: Pass\n");
        printf("Grade: D\n");}

    else
        {printf("Result: Fail\n");
        printf("Grade: F\n");}
    return 0;
}
