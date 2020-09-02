
#include<stdio.h>
#include<conio.h>

int main()
{
  int i=0,j=0,Num=7;

  printf("\n\n................................................\n");

  printf("\nLeft Lower Triangular Pattern For 7 Number =\n");

  for(i=1;i<=5;i++)
   {
      for(j=1;j<=5;j++)
        {
            if(i>=j)
            {
                printf(" %d ",Num);

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

