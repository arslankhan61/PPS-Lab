#include <stdio.h>

int main()

{   float r;
    printf("Enter Radius of circle: ");
    scanf("%f", &r); //address of Operator &
    printf("Area of Circle: %f\n", 3.14*r*r);
    printf("Perimeter of Circle: %f", 3.14*2*r);
    return 0;
}

