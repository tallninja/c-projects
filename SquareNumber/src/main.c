# include <stdio.h>


void squareNumber(int *num);

int main(void)
{
  int num;
  int * pnum = &num;

  printf("\nEnter a number you wish to square...\n>>>");
  scanf("%d", pnum);
  
  printf("\nThe square of %d is: ", num);
  squareNumber(pnum);
  printf("%d\n\n", num);
}


void squareNumber(int *num)
{
  *num *= *num;
}
