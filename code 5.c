#include <stdio.h>

int main()

{   int l;
    int b;
    printf("Enter Length of Rectangle: ");
    scanf("%d", &l); //address of Operator &
    printf("Enter Breadth of Rectangle: ");
    scanf("%d", &b); //address of Operator &
    printf("Area of Rectangle: %d", l*b);
    return 0;
}

