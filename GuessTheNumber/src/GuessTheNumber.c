# include <stdio.h>
# include <stdlib.h> // get access to the rand and srand functions
# include <time.h>


int main()
{
  int numberOfTries = 5;
  int guess;
  time_t t;
  
  srand((unsigned) time(&t)); // seed the random number to the time

  int randomNumber = rand() % 21;

  for (int i = numberOfTries; i > 0; --i) {
    
    printf("\nGuess a number between 0 and 20\n");
    printf("You have %d tr%s left:\n", i, i == 1 ? "y" : "ies");
    printf(">>> ");
    scanf("%d", &guess);

    if (guess == randomNumber) {
      printf("Congratulations ! You got it right !\n\n");
      return 0;
    }
    else if (guess < randomNumber && i > 1)
      printf("\nMy number is greater than %d\n", guess);
    else if (guess > randomNumber && i > 1)
      printf("\nMy number is less than %d\n", guess);
    else if (guess < 0 || guess > 20)
      printf("\nI said i'm thinking of a number between 0 and 20\n");
  }

  printf("\nOwww Bummer you lost...\n");
  printf("The number I was thinking of was %d\n\n", randomNumber);
}
