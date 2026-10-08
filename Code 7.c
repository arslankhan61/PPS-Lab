 #include <stdio.h>

int main()

{   int p;
    int t;
    int r;
    printf("Enter Period of time in Years: ");
    scanf("%d", &t); //address of Operator &
    printf("Enter Rate of interest: ");
    scanf("%d", &r); //address of Operator &
    printf("Enter Price in rupee: ");
    scanf("%d", &p); //address of Operator &
    printf("Simple Interest: %d", (p*t*r)/100);
    return 0;
}
