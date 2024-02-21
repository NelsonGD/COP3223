// Nelson Diaz

/* 
Program calculates the series from 1 to n, n
bring the user's input.
*/

// pre-processor directive
#include <stdio.h>
#include "main.h"

/*
this function takes an int and returns its factorialorial
*/
long long factorial(int n)
{
    long long i, factorial;

    factorial = 1;
    
    for(i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

/*
this function takes an int x and y and calculate x^y 
and returns long int as the result
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

// driver function
int main(void)
{
    int n; // Stores user given number
    int i;
    long double sum = 0.0; // Stores power factorial series

    // prompt user input
    printf("Enter your n:\n");
    scanf("%d", &n);

    // append to your sum:
    // call the power function with the right parameters
    // multiply the returned caluewith 1.0 to avoid integer division
    // divide by the function call to the factorial function called with the right parameters
    for (i = 1; i <= n; i++) {
        // Calculate the term and add it to the sum
        sum += power(i, i) / (long double)factorial(i);
    }


    printf("\nSummation of the series from 1 to %d is: %.2Lf\n", n, sum);

    return 0;
}

