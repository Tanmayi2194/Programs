
#include<stdio.h>
#include<conio.h>

  int main()
{
  int i=0,j=0;
  char ch='Q';

  printf("\n\n................................................\n");

  printf("\nLeft Lower Triangular Pattern For 'Q' Letter =\n");


  for(i=1;i<=5;i++)
   {
      for(j=1;j<=5;j++)
        {
            if(i>=j)
            {
                printf(" %c ",ch);

            }
            else
            {
               printf("   ");
            }
        }
   printf("\n");
   }

  printf("\n....Thanks....");
  printf("\n\n................................................");

  getch();
  return 0;
}

