/*
 * Author: Ernest Wambua
 * Purpose: Network Analysis and Performance
 * Date: 29/01/2021
 * 
 * */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 
 float calculateBer(int totalBitErrors, int totalBitsTransfered);
 
 enum state {ACTIVE = 1, WAITING, COMPLETED};
 
 int main() {
	 
	 enum state state;
	 
	 struct connectionsData {
		 char location[10];
		 float ber;
		 int stateIdx;
	 };
	 
	 typedef struct connectionsData Connections;
	 Connections connections[3] = {};
	 
	 
	 for(int n = 1; n <= 3; n++) {
		 printf("\nconnection %d\n", n);
		 printf("Location >>> ");
		 scanf("%s", connections[n-1].location);
		 printf("BER >>> ");
		 scanf("%f", &connections[n-1].ber);
		 printf("State (1, 2, 3) >>> ");
		 scanf("%d", &connections[n-1].stateIdx);
	 }
 }
 
 float calculateBer(int totalBitErrors, int totalBitsTransfered) {
	 return (totalBitErrors / totalBitsTransfered);
 }