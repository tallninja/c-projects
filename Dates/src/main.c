/*
 * Author: Ernest Wambua,
 * Purpose: Date converter
 * Date: 28/01/2021
 * 
 * */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 
 int main() {
	char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int day, month, year; 
	printf("Enter A date in the format dd/mm/yyyy: >>> ");
	scanf("%d/%d/%d", &day, &month, &year);
	
	if(month > 12) {
		printf("Please enter a valid month\n");
	}
	else {
		printf("%s %d, %d", months[month-1], day, year);
	}
	
	
	
 }