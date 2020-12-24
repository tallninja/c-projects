# include <stdio.h>


int main()
{
  int numOfDays = 365;
  int numOfHours = numOfDays * 24;
  double numOfMinutes = numOfHours * 60;

  double minutes;
  printf("Enter the number of minutes: ");
  scanf("%lf", &minutes);

  double result = minutes / numOfMinutes;

  printf("\nResult = %e years\n", result);

  return 0;
}
