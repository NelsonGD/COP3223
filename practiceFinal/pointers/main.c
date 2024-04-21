/*
Notes:
    - Regular variable stores value
    - Pointer (pointer variables) stores address.
*/

//pre-processor directive
#include <stdio.h>
#include <stdlib.h>

void Pointer()
{
    // creating pointer
    int* p;
    // or
    int *p1;
    int *p2;
    
    // Here we have a pointer p1 and a normal variable p2.
    int* p3, p4; 

}

void addressPointer()
{
    /*
    Assigning address of a variable to a pointer.

    Here the address of c is assigned to pc.
    Now value of pc and &c (adress of c) are the same.
    */
    int *pc, c;
    c = 5;

    // assign address to a pointer
    pc = &c;

    printf("value of pc = %p\n", pc);
    printf("address of c = %p\n", &c);
    printf("value of c = %d", c);
    printf("\n\n");

    // Getting value pointer to by Pointers
    int *hj, d = 5;

    // hj contains address of c
    hj = &d;

    // getting value pointer to hj, use *hj
    printf("Value stored in pc address = %d", *hj); // 5

    /*
    Here *hj is syntax used to access value stores in hj pointer. '*' is called
    DEREFERENCE operator when used like this.
    */

   /*
   Common Mistakes:

    int c, *pc;

    pc is address but c is not:
    pc = c; // ERROR

    &c is address but *pc is not:
    - *pc = &c; // ERROR
    
    both &c and pc are addresses
    pc = &c // VALID

    both c and *pc are values
    - *pc = c; // VALID
   */
}




// driver function
int main(void)
{
    int var = 0;
    // &var gives address for variable in memory.
    printf("var = %d\n", var);
    
    // &var for address and %p to print the address
    printf("address of var = %p", &var);
    printf("\n\n");

    addressPointer();
    printf("\n\n");


    return 0;
}