#include <stdio.h>
#include <math.h>

int power(int num, int exponent);
int factorial(int num);

int main(){
	printf("%ef\n", pow(30, 7));
	printf("%d\n", factorial(7));
	printf("%ef", (float)(power(30, 7) / factorial(7)));
	return 0;
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