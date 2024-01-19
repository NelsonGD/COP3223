// Nelson diaz

// pre-processor directive 
#include <stdio.h>

// driver function 
int main(void){

    // variable declaration
    int num, d1, d2, d3, d4, d5;

    // prompt the user for the number
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    //begin the process of extracting digits
    d1 = num % 10;
    num = num / 10;

    d2 = num % 10;
    num /= 10;

    d3 = num % 10;
    num /= 10;

    d4 = num % 10;
    num /= 10;

    d5 = num % 10;
    num /= 10;

    num = d5 * 1 + d4 * 10 + d3 * 100 + d2 * 1000 + d1 * 10000;

    // print our reverse number
    printf("Reverse Number: %d", num);

    int sum_digits = d1 + d2 + d3 + d4 + d5;

    printf("\nSum of digits: %d + %d + %d + %d + %d = %d\n", d5, d4, d3, d2, d1, sum_digits);

    return 0;
}