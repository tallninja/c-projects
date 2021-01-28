/*
 * Author: Charlotte Ruth, Joshua Obiero, Ernest Wambua
 * Purpose: Bubble Sort
 * Date: 27/01/2021
 * 
 * */

 #include <stdio.h>
 #include <stdlib.h>

 void swap(int* a, int* b);
 void sort(int arr[], int numberOfElements);
 void printArray(int arr[], int numberOfElements);
 
 int main(){
	int myArr[] = {6, 3, 9, 11, 5, 1, 0, 2, 7, 4, 8};
	int numberOfElements = sizeof(myArr) / sizeof(myArr[0]);
	sort(myArr, numberOfElements);
	printArray(myArr, numberOfElements);
 }
 
 
 // implements the swapping of elements
 void swap(int* a, int* b){
	 int temp = *a;
	 *a = *b;
	 *b = temp;
 }
 
 
 // implements the sorting algorithm
 void sort(int arr[], int numberOfElements) {
	 for(int i = 0; i < numberOfElements - 1; i++) {
		 for(int j = 0; j < numberOfElements - i - 1; j++) {
			 if(arr[j] > arr[j + 1])
				 swap(&arr[j], &arr[j + 1]);
		 } 
	 }
 }
 
 
 // handles printing of arrays
 void printArray(int arr[], int numberOfElements) { 
    for (int i=0; i < numberOfElements; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
 } 