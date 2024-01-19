// pre-processor directives.
#include <stdio.h>

int main(void){

    // Variables declaration.
    float sub1;
    float sub2;
    float sub3, sub4, sub5;
    float total, avg;

    // prompt the user for the input.
    printf("Enter the scores for 5 subjects separated by space: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    // Calculate total and average.
    total = sub1 + sub2 + sub3 + sub4 + sub5;

    avg = total / 5.0;

    // Print out total and average.
    printf("Total score: %f\n", total);
    printf("Percentage: %f %% \n", avg);

    return 0;

}