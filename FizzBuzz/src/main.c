/*
 * Author: Ernest Wambua
 * Date: 29/12/20
 * Purpose: FizzBuzz problem
 * 
 */
 
 # include <stdio.h>
 
 
 int main(int argc, char **argv)
 {
	 int limit = 50;
	 int num1 = 3;
	 int num2 = 5;
	 
	 for (int i = 1; i < limit; i++)
	 {
		 if (i % num1 == 0 && i % num2 == 0)
			printf("FizzBuzz\n");
		 
		 else if (i % num1 == 0)
			 printf("Fizz\n");
		 
		 else if (i % num2 == 0)
			 printf("Buzz\n");
			 
		 else
			 printf("%d\n", i);
	 }
 }
 
 