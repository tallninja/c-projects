#include <stdio.h>
#include <stddef.h>

void main(void)
{
    int number = 25;
    int *pnumber = NULL; // creates a pointer which references nothing

    pnumber = &number; // assigns the pointer the address of the number

    printf("\n\nThe value of Number: %d\n", number);
    printf("The value of Pnumber: %p\n\n", pnumber);

    printf("The size of Number: %d bytes\n", (int)sizeof(number));
    printf("The size of Pnumber: %d bytes\n\n", (int)sizeof(pnumber));

    printf("The address of Number: %p\n", &number);
    printf("The address of Pnumber: %p\n\n", &pnumber); // a pointer also has its own address in memory

    printf("The value of the address pnumber is pointing to: %d\n\n", *pnumber); // dereferencing a pointer
}