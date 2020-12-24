# include <stdio.h>

int main()
{
  double height, width, perimeter, area;

  printf("Enter the height: ");
  scanf("%lf", &height);
  printf("Enter the width: ");
  scanf("%lf", &width);

  perimeter = 2 * (height + width);
  area = height * width; 

  printf("\nArea: %f", area);
  printf("\nPerimeter: %f\n\n", perimeter);
}
