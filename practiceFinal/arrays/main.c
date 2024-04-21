// pre-processor directive
#include <stdio.h>
#include <stdlib.h>

// prototypes
void printAdrs();
void dynamicMemAlloc();
void changeValue(int *n);
void swapNumber(int *n1, int *n2);
int main2();

// driver function
int main(void)
{ 
    printf("Hello World!");
    printf("\n\n");

    printAdrs();
    printf("\n\n");

    main2();
    printf("\n\n");


    return 0;
}

/*
NOTES:
    An array is a block of sequential data.

    - Difference between two consecutive elements is 4 bytes.
        - Because array is int type which is 4 bytes.
    - Address of &x[0] and &x are the same.
    - &x[1] is equivalent to x+1 and x[1] is equivalent to *(x+1)
    - &x[2] is equivalent to x+2 and x[2] is equivalent to *(x+2)
    - scanf("%d", x+3) stores user input in x[3]. 
        - Equivalent to scanf("%d", &x[3]);

    Arrays decay to pointer.
        - Basically; Array names are converted to pointers.
*/

void printAdrs()
{
    int x[3]; // array of size 3
    for(int i = 0; i < 3; i++)  // Loop iterates over each array content
    {
        printf("&x[%d] = %p\n", i, &x[i]); // print address of item i in array
    }
    printf("Address of array x: %p", x); // always address of first item in array
    printf("\n\n");
}

void changeValue(int *n)
{
    *n = 100;
}

void dynamicMemAlloc()
{
    int number = 5;

    printf("Before, number = %d\n", number); // 5
    changeValue(&number); // calling the change number function
        /* 
        By using &number you are saying:
            - n is set to the address of number.
            - *n is set to the value stored in number.
        */
    printf("After, number = %d\n", number); // 100
}

void swapNumber(int *n1, int *n2)
{
    int temp;
    /*
    Here we are taking the value of two ints with two pointers:
        - n1 & n2 have the ADDRESSES
        - *n1 & *n2 have the VALUES
    */
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

/*
When the values stores in n1 and n2 adresses are swapped, 
the value of num1 and num2 are also swapped in the main() function.
*/
int main2(void)
{
    int num1 = 1, num2 = 100;
    
    swapNumber(&num1, &num2); // we are sending the address of num & num2
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    return 0;

}