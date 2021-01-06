# include <stdio.h>


void swap(int *a, int *b);

int main(void)
{
  int a = 100;
  int b = 200;

  printf("\nBefore Swap !\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  swap(&a, &b);

  printf("\nAfter Swap !\n");
  printf("a = %d\n", a);
  printf("b = %d\n\n", b);
}


void swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;

  return;
}
