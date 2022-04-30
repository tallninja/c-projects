#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// GENERAL NOTE: modern compilers are quite good at helping to detect many of these simple errors, so you may get warnings from the compiler
// about what you are about to try. However, these examples illustrate the nature of the problem, which may occur in much more complicated
// situations.


// freeing already freed memory
// NOTE: if you are lucky, the C run time will trap this. On the other hand, if it doesn't and you are in a large and complex program
// you can be in for a very long degugging session indeed!
void problem1() {
	char *b;

	b = (char*)malloc(10);
	free(b);
	free(b);			// this causes an exception in Visual Studio	
}

// memory leak
void problem2() {
	char *b;

	for (int i = 0; i < 10; i++) {
		b = (char*)malloc(10);		
	}
	free(b);		
	// now we've 'lost' 9 * 10 bytes of memory
	// we can't 'free' them because we don't have a pointer to the memory any longer
}

// re-use of memory that is freed
void problem3() {
	char *b, *c;

	b = (char*)malloc(100);
	c = b;
	free(b);
	strcpy(c, "hello");
	printf("c is %s\n", c);
	// the results really are unpredictable ..
	// in Visual Studio, I get repeated 'c is ', etc.
}

// pointer out of scope
char* problem4() {
	char b[20];

	printf("enter your name ... ");
	gets(b);
	return b;
	// when this function returns 'b' will be overwritten
	// so even though I have a pointer to it, it does not contain my name
}

// trying to use a null pointer
// you will see this called 'deferencing a null pointer'
// this is cause an instant exception on most (if not all) modern operating systems
// this is good news because its easy to track down. However, on micro-controllers without
// virtual memory management, this can be quite tricky to debug as it will lead to very unexpected results
void problem5() {
	char *b;
    b = (char*)malloc(10);
	b = NULL;
	b[0] = 1;
}

int main() {

	 problem1();
	// problem2();
	// problem3();	
	// printf("you typed %s\n", problem4());
    // problem5();
	printf("That's all, folks!\n");
	return 0;
}