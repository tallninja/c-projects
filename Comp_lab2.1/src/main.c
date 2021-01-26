
/*
 * Authors: Junn Hope, Agnetta Khasamani, Gregory Waburi, Ernest Wambua
 * Purpose: letter frequency analysis
 * Date: 26/01/2021
 * 
 * */
 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	
	char sentence[255];
	char *sentencePtr = sentence;
	
	printf("Enter a sentence: \n");
	fgets(sentence, 255, stdin);

	
	int count[26] = {0};
	
	while(*sentencePtr){
		count[tolower(*sentencePtr) - 'a']++;
		sentencePtr++;
	}
	
	for(int i = 0; i < 26; i++) {
		if (count[i] != 0)
			printf("%c = %d\n", (i + 'a'), count[i]);
	}
}
