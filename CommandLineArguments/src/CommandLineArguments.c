# include <stdio.h>

int main(int argc, char *argv[])
{
  int numberOfArguments = argc; // the number of arguments passed to the program at runtime
  char *argument1 = argv[0]; // the first argument is always the program being run
  char *argument2 = argv[1]; // this is the argument you provide at runtime

  printf("Number of arguments: %d\n", numberOfArguments);
  printf("First argument: %s\n", argument1);
  printf("Second argument: %s\n", argument2);
}
