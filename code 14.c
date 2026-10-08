#include <stdio.h>

int main()

{  int a, b, c;
   printf("Type the number 1 ");
   scanf("%d",&a);
   printf("Type the number 2 ");
   scanf("%d",&b);
   printf("Type the number 3 ");
   scanf("%d",&c);
    if (a>b && a>c)
      {
          printf("%d is the Greatest", a);
      }
    else if(b>a && b>c)
      {
          printf("%d is the Greatest", b);
      }
      else
      {
          printf("%d is the Greatest", c);
      }

    return 0;
}



