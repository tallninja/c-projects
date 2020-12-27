# include <stdio.h>


int main(int argc, char **argv)
{
	int num1;
	int num2;
	num1 = 25;
	int* pnum1 = &num1; // creating a pointer called that stores the address of num1
	num2 = *pnum1; // asigning num2 the value of the address to which pnum1 is pointing to dereferencing
	
	printf("num1 = %d num2 = %d pnum1 = %p &num1 = %p", num1, num2, pnum1, &num1);
}