#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// NOTE: I always find this syntax to be a bit 'gnarly' so I typedef the 'Pointer-to-Function-returning-Integer' like this
typedef int(*PFI)(int);

// our example function
int square(int a) {
	return a*a;
}

int main() {
	PFI test;					// this is the function pointer
    // int (*test)(int);
	char input[50];
	int value;
	int result;

	// set the function pointer 'test' to the address of the function 'square'
	test = square;

	// try it out
	printf("enter the number to square ... ");
	value = atoi(gets(input));
	result = test(value);
	printf("the result is %d\n", result);
	return 0;
}