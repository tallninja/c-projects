/*
 * Author: Ernest Wambua
 * Date: 29/12/20
 * Purpose: Reversing a string using pointers
 * 
 */
 
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
 

void reverse(char* string, int stringLength, char* reversed);

int main(int argc, char **argv)
{
	char name[] = "Ernest";
	char* reversed = NULL;
	reversed = (char *)malloc((strlen(name) + 1) * sizeof(char));
	
	if (reversed != NULL)
	{
		reverse(name, strlen(name), reversed);
	}
	printf("string = %s\n", name);
	printf("reversed = %s\n", reversed);
	
	free(reversed);
	reversed = NULL;
}


void reverse(char* string, int stringLength, char* reversed)
{
	char* stringEnd = string + (stringLength - 1); // get to the last character excluding the null character
	
	while (stringEnd >= string)
	{
		*reversed++ = *stringEnd--;
	}
}