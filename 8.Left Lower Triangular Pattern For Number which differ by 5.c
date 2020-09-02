#include<stdio.h>
#include<conio.h>

  int main()
{
  int i=0,j=0,n=15;

  printf("\n\n................................................\n");

  printf("\nLeft Lower Triangular Pattern For Number which differ by 5 =\n\n");


  for(i=1;i<=5;i++)
   {
      for(j=1;j<=5;j++)
        {
            if(i>=j)
            {

                printf(" %d ",n);
                n=n+5;

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
