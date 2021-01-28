/*
 * Authors: Charlotte Ruth, Joshua Obiero, Ernest Wambua
 * Purpose: Tyalor series implementation
 * Date: 27/01/2021
 * 
 * */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 
 int factorial(int num);
 //int power(int num, int exponent);
 
 int main(){
	 float sum = 0;
	 int x;
	 int numOfTerms;
	 
	 printf("Enter a number \n");
	 scanf("%d", &x);
	 printf("Enter the number of terms \n");
	 scanf("%d", &numOfTerms);
	 
	 int i = 1;
	 int det = 1;
	 while(numOfTerms != 0){
		 sum += (det * (pow((x * 0.01745329252), i) / factorial(i)));
		 det *= (-1);
		 i += 2;
		 numOfTerms--;
	 }
	 
	 printf("sin(%d) = %f\n\n", x, sum);
	 
	 return 0;
 }
 

 int factorial(int num){
	 int result = 1;
	 for(int i = num; i > 0; i--){
		 result *= i;
	 }
	 
	 return result;
 }