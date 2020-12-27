# include <stdio.h>


int main(void)
{
	int num1;
	int num2;
	num1 = 25;
	int* pnum1 = &num1;
	num2 = *pnum1;
	
	printf("num1 = %d num2 = %d pnum1 = %p &num1 = %p", num1, num2, pnum1, &num1);
}