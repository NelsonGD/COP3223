/*
I want to write a code that will find the average of 2 numbers and then give the addres, value, and size of the variable that stores the average.

I need 3 variables: num1, num2, avg.
First: Ask Input, Second: Operation, Third:

*/

// pre-processor directive
#include <stdio.h>

// driver function (basically runs the whole code)
int main(void){

    float num1, num2, avg;

    printf("Give 2 numbers separated by a space: ");
    scanf("%f %f", &num1, &num2);

    avg = (num1 + num2)/2;

    printf("The average of %f and %f is: %f\n", num1, num2, avg);
    printf("The address of avg is: %p\n", &avg);
    printf("Value of avg is: %f\n", avg);
    printf("Size of avg is: %lu\n", sizeof(avg));
}