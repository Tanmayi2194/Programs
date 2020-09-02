#include<stdio.h>
#include<conio.h>

  int main()
{
  int i=0,j=0;
  char ch='A';

  printf("\n\n................................................\n");

  printf("\nLeft Lower Triangular Pattern For A,B,C... =\n");


  for(i=1;i<=5;i++)
   {
      for(j=1;j<=i;j++)
        {
            printf(" %c ",ch+j-1);
        }
      printf("\n");
   }

  printf("\n....Thanks....");
  printf("\n\n................................................");

  getch();
  return 0;
}
