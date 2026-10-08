#include <stdio.h>

int main()

{  int a, b;
   printf("Type the Cost price of the product ");
   scanf("%d",&a);
   printf("Type the Selling Price of the product ");
   scanf("%d",&b);
    if (b==a)
      {
          printf("No Profit no loss");
      }
    else if(b>a)
      {
          printf("Profit");
      }
      else
      {
          printf("Loss");
      }

    return 0;
}




