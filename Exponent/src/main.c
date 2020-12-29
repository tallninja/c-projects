/*
 * Author: Ernest Wambua
 * Date: 29/12/20
 * Purpose: calculating the exponent of a number
 *
 */
 
 # include <stdio.h>
 
 int power(int num, int exponent);
 
 int main(int argc, char **argv)
 {
	 int num;
	 int exponent;
	 printf("Enter the number: >>> ");
	 scanf("%d", &num);
	 printf("Enter the exponent: >>> ");
	 scanf("%d", &exponent);
	 
	 printf("%d^%d = %d\n", num, exponent, power(num, exponent));
 }
 
 int power(int num, int exponent)
 {
	 int result = 1;
	 int counter = 0;
	 
	 while (counter < exponent)
	 {
		 result *= num;
		 counter++;
	 }
	
	 return result;
 }