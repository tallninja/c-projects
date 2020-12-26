# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

int calculateSum(int arr[], int maxLen);

int main(void)
{
  int maxLen = 5;
  int myArr[5] = {1, 2, 3, 4, 5};
  int sum = calculateSum(myArr, maxLen);
  printf("\n%d\n\n", sum);
  return 0;
}

int calculateSum(int arr[], int maxLen)
{
  int *arrPtr = NULL;
  int *arrayEnd = arr + maxLen;
  int sum = 0;

  for (arrPtr = arr; arrPtr < arrayEnd; ++arrPtr)
  {
    sum += *arrPtr;
  }

  return sum;
}
