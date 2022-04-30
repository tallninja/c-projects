/*
 * Author: Ernest Wambua,
 * Purpose: Selection Sort,
 * Date: 28/01/2021
 * 
 * */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 void swap(int* a, int* b);
 void sort(int arr[], int size);
 void printArray(int arr[], int size);
 
 int main() {
	int myArr[] = {0, 1, 8, 2, 7, 3, 9, 11, 4};
	int numberOfElements = sizeof(myArr) / sizeof(int);
	sort(myArr, numberOfElements);
	printArray(myArr, numberOfElements);
 }
 
 // handles swapping of the array elements
 void swap(int* a, int* b) {
	 int temp = *a;
	 *a = *b;
	 *b = temp;
 }
 
 // handles the sorting process
 void sort(int arr[], int numberOfElements) {
	 int minIndex;
	 
	 for(int i = 0; i < numberOfElements - 1; i++) {
		 minIndex = i;
		 for(int j = i + 1; j < numberOfElements; j++)
			 if(arr[j] < arr[minIndex])
				 minIndex = j;
				 
		swap(&arr[minIndex], &arr[i]);
	 }
 }
 
 // handles printing of arrays
 void printArray(int arr[], int numberOfElements) { 
    for (int i=0; i < numberOfElements; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
 } 
 
 