#include <stdio.h>

int main()
{
  char name[20];
  int age;

  printf("\nEnter your name and age:");
  scanf("%s %d", name, &age);

  printf("\nYour name is %s and you are %d years old\n\n", name, age);
}
