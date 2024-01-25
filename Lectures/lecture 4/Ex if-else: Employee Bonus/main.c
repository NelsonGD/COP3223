// Nelson diaz

/*
The point of this program is to showcase how you can have expresions
inside the if statement.
*/

// Pre-processor Directive
#include <stdio.h>

// driver function
int main(void)
{

    int cyear, jyear, bonus;
    printf("Enter the current year and the joining year: ");
    scanf("%d %d", &cyear, &jyear);

    if((cyear - jyear) >= 5)
    {
        bonus = 5000;
        printf("Thank you for working with us for several years\n");
    }
    else
    {
        bonus = 2500;
        printf("You are still new\n");
    }

    printf("Your bonus is %d\n", bonus);
    printf("Completed\n");

    return 0;

}