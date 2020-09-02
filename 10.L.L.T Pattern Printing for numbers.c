#include<stdio.h>
#include<conio.h>

  int main()
{
  int i=0,j=0,n=2;

  printf("\n\n................................................\n");

  printf("\nLeft Lower Triangular Pattern For Number which differ by 2=\n\n");


  for(i=1;i<=8;i++)
   {
      for(j=2;j<=i;j++)
        {
            printf(" %d ",j++);
        }

   printf("\n");
   }

  printf("\n....Thanks....");
  printf("\n\n................................................");

  getch();
  return 0;
}
