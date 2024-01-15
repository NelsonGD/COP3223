// Full name: Nelson Diaz

/* Calculate the average of the scores for a student */

// pre-processor directives
#include <stdio.h>

int main(void){

    // Variables declaration
    float sub1;
    float sub2;
    float sub3, sub4, sub5;
    float total, avg;

    // prompt the user for the input
    printf("Enter the scores for 5 subjects separated by space: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    // You can either declare the result as a float by typing it before the operation or by making the number a decimal ex:2.0
    avg = total / 5.0; // I need to change it so it finds the average of 5 courses.

    printf("Total score: %f\n", total);
    printf("Percentage: %f %% ", avg); // REMEMBER To print % you need to use %%.

    return 0;

    /*s
    This is to store the values in different lines
    canf("%f", &sub1);
    scanf("%f", &sub2);
    */ 

}

