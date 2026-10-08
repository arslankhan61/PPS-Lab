#include <stdio.h>

int main()

{   float a;
    float b;
    float c;
    printf("Enter First number: ");
    scanf("%f", &a); //address of Operator &
    printf("Enter Second number: ");
    scanf("%f", &b); //address of Operator &
    printf("Enter Third number: ");
    scanf("%f", &c); //address of Operator &
    printf("Average of three Number: %f", (a+b+c)/3);
    return 0;
}


