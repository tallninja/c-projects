#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int a;           // 4 bytes    
    double b;        // 8 bytes    
    int c;           // 4 bytes    
    long long int d; // 8 bytes
} MYSTRUCT;

#define COUNT 4

// a more complicated example

int main()
{
    MYSTRUCT *p, *q;
    void* v;

    printf("size of MYSTRUCT = %d\n", sizeof(MYSTRUCT));
    // IMPORTANT NOTE: the size of MYSTRUCT is NOT always 24 bytes! It will vary according to the processor architecture
    // ...
    // ... because some processor architectures will require a 'double' (say) to be at an address which is multiple of 8
    // ...
    // ... so it is very important to make no assumptions on the size of a structure: ALWAYS use 'sizeof' or let the
    // compiler use address arithmetic.

    // allocate some memory and clean it out: 'calloc' is quite useful here
    // p = (MYSTRUCT*)calloc(COUNT, 24); // DO NOT DO THIS!
    p = (MYSTRUCT*)calloc(COUNT, sizeof(MYSTRUCT));
    // initialize it to something interesting using a large floating point value for the double and a large value for
    // the 64-bit integer
    // this is so we can see where the compiler has inserted padding space to get the desired alignment for the 8 byte
    // quantities 'b' and 'd'
    for(int i = 0; i < COUNT; i++) {
        p[i].a = i;
        p[i].b = 10000000000.0 + i;
        p[i].c = i * 20;
        p[i].d = 4294967296 + i;
    }

    // first let's see what we've got
    // NOTE: look at the addresses of the 'double' and the 'long long int' - they start (are aligned) on an 8 byte
    // boundary
    q = p;    
    printf("[0] values:\na is %d\nb is %f\nc is %d\nd is %lld\n", q->a, q->b, q->c, q->d);
    printf("addresses:\na is %p\nb is %p\nc is %p\nd is %p\n", &q->a, &q->b, &q->c, &q->d);     
    q = p + 3; // use address arithmetic to get the address of the third element (the array is zero based remember)
    printf("\n[3] values:\na is %d\nb is %f\nc is %d\nd is %lld\n", q->a, q->b, q->c, q->d);
    printf("addresses:\na is %p\nb is %p\nc is %p\nd is %p\n\n", &q->a, &q->b, &q->c, &q->d);

    // finally a more advanced way of looking at what is inside the structure (all 32 bytes of it)
    // IMPORTANT NOTE: address arithmetic will not work with generic pointers unless you use a cast
    // this will not work: 'v = v + 3' (or 'v[3]') because the compiler doesn't know what the thing that 'v' (a generic
    // pointer) is pointing to is ...
    // ... and so it can't use address arithmetic; instead we have to use a cast to tell the compiler what 'v' is
    // pointing at

    v = p + 3; // look at the third element of the array of MYSTRUCTs
    // print out the values as integers - the zeros show you where the padding has been inserted by the compiler
    // NOTE: that we are using address arithmetic to move along MYSTRUCT as a set of 8 'int' values of 4 bytes each (32
    // bytes in total)
    printf("Struct at index 3\n");
    for(int i = 0; i < sizeof(MYSTRUCT) / sizeof(int); i++) {
        printf("v[%d]=%d\n", i, ((int*)v)[i]);
    }

    return 0;
}
