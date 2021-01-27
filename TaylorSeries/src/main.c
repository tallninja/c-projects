/*
 * Authors: Charlotte Ruth, Joshua Obiero, Ernest Wambua
 * Purpose: Tyalor series implementation
 * Date: 27/01/2021
 * 
 * */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 int factorial(int num);
 int power(int num, int exponent);
 
 int main(){
	 float sum = 0;
	 int x;
	 int numOfTerms;
	 
	 printf("Enter a number \n");
	 scanf("%d", &x);
	 printf("Enter the number of terms \n");
	 scanf("%d", &numOfTerms);
	 
	 int i = 1;
	 while(numOfTerms != 0){
		 sum += (power(x, i) / factorial(i));
		 i += 2;
		 numOfTerms--;
	 }
	 
	 printf("sin(%d) = %f", x, sum);
 }
 
 int power(int num, int exponent){
	 int y = exponent;
	 int result = 1;
	 while(y != 0){
		 result *= num;
		 y--;
	 }
	 
	 return result;
 }
 
 int factorial(int num){
	 int result = 1;
	 for(int i = num; i > 0; i--){
		 result *= i;
	 }
	 
	 return result;
 }