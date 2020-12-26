# include <stdio.h>
# include <stdlib.h>


int main(void)
{
  char *text = NULL;
  int size;

  printf("\nEnter the character Limit: >>> ");
  scanf("%d", &size);

  text = (char *) malloc(size * sizeof(char)); // dynamically allocate memory

  if (text != NULL)
  {
    printf("Enter the text: >>> ");
    scanf("%s", text);

    printf("\n%s\n\n", text);
  }

  free(text); // free the allocated memory
  text = NULL;
}
