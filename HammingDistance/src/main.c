/*
 * Author: Ernest Wambua,
 * Purpose: Hamming Distance,
 * Date: 28/01/2021
 * 
 * */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 
 int main() {
		char str1[9], str2[9];
		printf("Enter 2 strings to get the Hamming distance\n");
		scanf("%s%s", str1, str2);
		
		int count = 0;
		
		for(int i = 0; i <= 8; i++) {
			if(str1[i] != str2[i])
				count++;
		}
		
		printf("The Hamming distance is: %d\n\n", count);
 }