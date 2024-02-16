// Nelson Diaz

/* 
Program calculates the series from 1 to n, n
bring the user's input.
*/

// pre-processor directive
#include <stdio.h>
#include "main.h"

// driver function
int main(void)
{
    int n; // Stores user given number
    int i;
    double sum = 0.0; // Stores power fact series

    // prompt user input
    printf("Enter your n:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        // append to your sum:
        // call the power function with the right parameters
        // multiply the returned caluewith 1.0 to avoid integer division
        // divide by the function call to the fact function called with the right parameters
    }

    printf("\nSummation of the series from 1 to %d is: %.2lf", n, sum);

    return 0;
}

/*
this function takes an int and returns its fact
*/
long long fact(int n)
{
    long long i, fact;
    
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
}

/*
this function takes an int x and y and calculate x^y and returns long int as the result
*/
long long power(int x, int y)
{
    long long result = 1; // Needs to be one so it's not smited everytime it multiplies

    while(y > 0)
    {
        // multiplication
        result *= x;

        y--;
    }
    return result;
}