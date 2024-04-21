// pre-processor directive
#include <stdio.h>
#include <stdlib.h>

/*
NOTES:

    Once arrays are created you can't change them.
    - int arr[10];
        - If you only need to store three things then there's space wasted
        - If you need to store an 11th item then you can't
    
    - Solved by allocating 

    - malloc()
        - Reserves block of memory of the specified
          number of bytes. 
        - syntax for malloc
        ptr = (castType*)
        malloc(sizeInBytes);
    
    - free()
        - To release memory.

    - You can't just malloc any part of the memory
        - So I guess create a space in the memory through a variable or pointer and then use that to malloc.

*/

// driver function
int main(void){

    // You want to allocate memory for n number of double values.
    double* ptr;
    int n = 100;

    // allocate memory for n number of data of type double
    ptr = (double*) malloc(n * sizeof(double));
    /*
    n * sizeof(double) is memory required to store n number of data of type double.
    Here n is 100 and the size of double is usually 8 bytes. So n*sizeof(double) is 800 bytes.
    malloc(n * sizeof(double)) allocates specified memory.
    ptr pointer holds the address of the first byte in memory. 
    * If memory can't be allocated then expression results NULL (null pointer).
    */

   free(ptr);

    return 0;
}