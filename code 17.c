#include <stdio.h>

int main()

{  int year;
   printf("Type the Year ");
   scanf("%d",&year);
    if (year%100==0)

    if (year%400==0)
      {
          printf("Leap year");
      }
      else
      {
          printf("Not Leap year");
      }
      else if(year%4==0)
      {
          printf("Leap year");
      }
    else
      {
          printf("Not Leap year");
      }

    return 0;
}
