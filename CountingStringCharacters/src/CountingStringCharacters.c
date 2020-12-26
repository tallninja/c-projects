# include <stdio.h>

int stringLength(const char *str);

int main(void)
{
  char myString[] = "Ernest";
  int length = stringLength(myString);

  printf("\n%s = %d\n\n", myString, length);
}


int stringLength(const char *str)
{
  const char *end = str; // points to the start of the string

  while (*end)
    end++;  // increment the end pointer and the string pointer

  int length = (int) (end - str); // subtract the end pointer from the start pointer to get the length
  return length;
}
