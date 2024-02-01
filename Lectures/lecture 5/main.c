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

    // translate number score to letter score
    // else if makes it so they depend on each other.
    if(score >= 90)
        printf("A grade\n");
    else if(score >= 80)
        printf("B grade\n");
    else if(score >= 70)
        printf("C grade\n");
    else
        printf("F grade\n");

    /*
    IMPORTANT: Lets say that the score is 95, even though this fills the conditions to satisfy all the if statements, it's
    only going to print the A grade because if it satisfies the if statement then it won't go to the next statement.
    Basically, if it can go to the first if else statement then it will and stay there, if it has to go to the third if statement then it will and will stop there. This is because of the ELSE IF estatemets.

    If you made the same code using only if statements then it would print everything if the score was 95 since the statements DON'T
    depend on each other.
    */

    return 0;
}