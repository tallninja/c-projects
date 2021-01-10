#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// look at calloc and memory leaks
int main() {
	char* s;
	int i;
	int* p;

	// use malloc first to allocate some memory and see what is in it (usually rubbish)
	s = (char*)malloc(6);						// malloc will return NULL (0) if it fails, so we should check here, but we wont for brevity
	for (i = 0; i < 6; i++) printf("s[%d]=%d\n", i, s[i]);
	free(s);									// use 'free' to return the memory so that we don't get a memory leak

	// now we'll use calloc to do the same - note that the memory is 'zeroed out'
	// NOTE: the syntax of 'calloc' is different for 'malloc' - the second argument gives the size of the memory unit to allocate
	s = (char*)calloc(6, sizeof(char));				// calloc will return 0 if it fails, so we should check here, but we wont for brevity
	for (i = 0; i < 6; i++) printf("s[%d]=%d\n", i, s[i]);
	free(s);

	// in this last example, 'calloc' allocates 6 integers, or 24 bytes, since an integer is 4 bytes long
	p = (int*)calloc(6, sizeof(int));				// calloc will return 0 if it fails, so we should check here, but we wont for brevity
	for (i = 0; i < 6; i++) printf("p[%d]=%d\n", i, p[i]);
	free(p);

    return 0;
}

