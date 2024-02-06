// Nelson Diaz

/*
Program takes a year as input to determine 
whether the year is a leap year or not.
*/

// pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{
    // variable declaration
    int year;

    // prompt user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // logic, check if year is leap year.
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0)){
        printf("%d is a leap year.\n", year);
    }
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}