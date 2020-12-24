# include <stdio.h>

int main()
{
  enum Company {FACEBOOK, AMAZON, NETFLIX, GOOGLE, MICROSOFT};

  enum Company netflix = NETFLIX;
  enum Company google = GOOGLE;
  enum Company facebook = FACEBOOK;

  printf("\nNetflix: %d\n", netflix);
  printf("Google: %d\n", google);
  printf("Facebook: %d\n\n", facebook);
}
