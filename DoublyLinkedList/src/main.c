/*
 * Author: Ernest Wambua
 * Date: 04/01/21
 * Purpose: Doubly linked list implementation
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listitem {
	struct listitem *next;		// pointer to next item
	struct listitem *prev;		// pointer to previous item
	int data;					// some data
} LISTITEM;


int main() {
	LISTITEM *temp, head;

	// NOTE: for convenience here, I'll use a LISTITEM to store the list forward and backward pointers
	// since the LISTITEM's data is only 4 bytes, this doesn't matter, but for a large data part, 
    // it would be inefficient.
	// first indicate that the list has nothing in it 
	// ... this is done by setting both list pointers to point to themselves

	head.next = (LISTITEM*)&head;
	head.prev = (LISTITEM*)&head;
	head.data = -1;									// for clarity  - it isn't actually used

	// now populate the list
	for (int i = 0; i < 3; i++) {
		temp = malloc(sizeof(LISTITEM));			// allocate some memory for the new list item
		temp->data = i;								// set the list item's data to the loop count so that we can see where it is in the list
		temp->next = head.next;						// this will insert at the FRONT of the list
		head.next = temp;							// and set the list head to the newly created list item
		temp->prev = &head;							// this will insert at the BACK of the list
		temp->next->prev = temp;					// and set the list 'tail' to the newly created item
	}

	// now let's see what we got going forward
	temp = head.next;								// initialize our temporary variable to the head of the list
	while (temp != &head) {							// keep going until we've reach the end
		printf("forward list item: current is %p; next is %p; prev is %p; data is %d\n", temp, temp->next, temp->prev, temp->data);
		temp = temp->next;							// move to the next item in the list					
	}

	// and going backwards
	temp = head.prev;								// initialize our temporary variable to the tail of the list
	while (temp != &head) {							// keep going until we've reach the end
		printf("backward list item: current is %p; next is %p; prev is %p; data is %d\n", temp, temp->next, temp->prev, temp->data);
		temp = temp->prev;							// move to the previous item in the list					
	}

	return 0;
}