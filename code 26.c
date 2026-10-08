#include <stdio.h>

int main()

{   int isPrime = 1;
    int a;
    printf("Type your Number ");
    scanf("%d",&a);
    for(int j = 2;j < a; j++)
   {
     if(a % j == 0)
     {
         isPrime = 0;
         break;
     }
   }
   if (isPrime == 1)
   {
       printf("is Prime");
   }
   else
   {
       printf("is not Prime");
   }

    return 0;
}
