# include <stdio.h>


void copyString(char *to, char *from);

int main(void)
{
  char str1[] = "Ernest";
  char str2[50];

  copyString(str2, str1);

  printf("\nstr2 = %s\n\n", str2);
}


void copyString(char *to, char *from)
{
  while (*from) // when it reaches the null character then the loop will break since it will return false (0)
    *to++ = *from++;
  *to = '\0';
}
