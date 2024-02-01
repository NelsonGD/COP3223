// Nelson Diaz

// pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{

    // variable declaration
    int score;

    // prompt user for input
    printf("Enter your score: ");
    scanf("%d", score);


    /*
    Short circuit evaluation: 
    Your code will determine the result as soon as possible. As soon as it find the 
    true value it stops checking.
    */

    if(score >= 90)
        printf("A grade\n");

    if(score >= 80 && score < 90)
        printf("B grade\n");

    if(score >= 70 && score < 80)
        printf("C grade\n");

    if(score < 70 )
        printf("F grade\n");

    /* 
    This is just an example, but else if statements would be better for this case becaues it doesn't have to check
    for two conditions for every if statment. Due to short circuit evaluation.
    */
    return 0;
}