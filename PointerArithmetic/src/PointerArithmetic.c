# include <stdio.h>
# include <string.h>

int main(void)
{
  char myName[] = "Ernest Wambua";
  char *myNamePtr = myName;

  for (int i = 0; i < (int)strnlen(myName, sizeof(myName)); i++) {
    printf("myName[%d] = %c  *(myNamePtr + %d) = %c  &myName[%d] = %p  myNamePtr + %d = %p\n",
        i, myName[i], i, *(myNamePtr + i), i, &myName[i], i, myNamePtr + i);
  }
}
