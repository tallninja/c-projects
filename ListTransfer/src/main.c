// NOTE: in the last example we looked at the basics of a doubly linked list
// here, I'll show you how you would normally use them as a 'queue'
// a queue is a 'first-in, first-out' (FIFO) structure
// NOTE: you can also easily insert and remove items at any point in the queue if you wish, but it is more common to keep to FIFO operations

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// this what is going to be in the queue
typedef struct listitem {
	struct listitem *next;			// pointer to next item
	struct listitem *prev;			// pointer to previous item
	int data;						// some data
} LISTITEM;

// this is the queue 'header'
typedef struct {
	struct listitem *first;			// pointer to 1st item
	struct listitem *last;			// pointer to last item
} LISTHDR;

LISTHDR src;						// this is the 'source' list
LISTHDR dst;						// this is the 'destination' list

// this puts an item in at the end of a queue
void enqueue(LISTHDR *queue, LISTITEM *item) {
	LISTITEM *temp;

	temp = queue->last;				// get the 'last' item in the queue and keep hold of it
	queue->last = item;				// put the item in the queue at the end
	item->prev = temp;				// link back to old 'last' item
	item->next = (LISTITEM*)queue;	// set the forward link of the new item
	temp->next = item;				// and finally set the forward link of the old 'last' item to the new one
}

// this removes an item from the front of a queue - returns the item or NULL if there are no more items
LISTITEM* dequeue(LISTHDR *queue) {
	LISTITEM *temp;

	temp = queue->first;				// get the 'first' item
	if (temp == (LISTITEM*)queue) {		// if the head of the queue points to itself ...
		temp = NULL;					// ... then the queue is empty 			
	}
	else {
		queue->first = temp->next;		// and set the queue header to point to the 'second' item
		queue->first->prev = (LISTITEM*)queue;
	}
	return temp;
}

int main() {
	LISTITEM *temp;

	// first, make empty 'source' and 'destination' queues
	src.first = (LISTITEM*)&src;
	src.last = (LISTITEM*)&src;
	dst.first = (LISTITEM*)&dst;
	dst.last = (LISTITEM*)&dst;

	for (int i = 0; i < 3; i++) {	// as before, populate the queue
		temp = malloc(sizeof(LISTITEM)); // allocate some memory for the new queue item
		temp->data = i;				// set the item's data to the loop count so that we can see where it is in the queue
		enqueue(&src, temp);				// and put it in the queue
	}

	// now let's remove from the 'source' queue and add to the 'destination queue
	// NOTE: it would be possible to write a 'copy' function which does this, but it's better to use the existing 'enqueue' and 'dequeue'
	// methods that I've already developed, the reason being that I know that they work! This is a good example of code reuse rather than 're-invent'.
	// In general, it is usually better to re-use something which has been tested and works rather than someting new which may have errors.

	printf("building destination queue ...\n");
	do {							// keep going until the 'source' queue is empty
		temp = dequeue(&src);		// if the queue is empty we will get NULL returned
		if (temp != NULL) {
			printf("data is %d\n", temp->data);
			enqueue(&dst, temp);
		}
	} while (temp != NULL);

	// see what we've got
	printf("destination queue ...\n");
	do {							// keep going until the queue is empty
		temp = dequeue(&dst);		// if the queue is empty we will get NULL returned
		if (temp != NULL) {
			printf("destination data is %d\n", temp->data);
			free(temp);				// call 'free' to tidy up 
		}
	} while (temp != NULL);

	printf("source queue ...\n");
	temp = dequeue(&src);		// if the queue is empty we will get NULL returned
	if (temp == NULL) {
		printf("source queue is empty\n");
	}
	return 0;
}

