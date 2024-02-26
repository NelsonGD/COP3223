// Nelson Diaz

/*
Program that finds the PowerFactorial Series of a number by using
two functions, factorial(), and power(). These are called through main.
Because the number can be so big we program uses long long return types.
*/

/*
Power Factorial series: (1^1)/1! + (2^2)/2! + ....
Can be written as (n^n)/n! + ....

Factorial of a number is n! = n * (n-1)*(n-2)...3*2*1
*/

// pre-processor directive
#include <stdio.h>

//function prototypes
long long factorial(int number);
long long power(int x, int y);

// driver function
int main(void)
{
    // variable declaration
    int number, i;
    double powFact = 0; 

    // prompt user input
    printf("Enter your n: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
        powFact += power(i, i)/(double)factorial(i);
    }

    printf("Summation of the series from 1 to %d is: %.2f\n", number, powFact);

    return 0;
}

long long factorial(int number)
{
    int i;
    long long fact = 1;

    for(i = 1; i <= number; i++)
    {
        fact *= i; 
    }

    return fact;
}

long long power(int x,int y)
{
    int i;
    long long result = 1;

    while(y > 0)
    {
        result *= x;

        y --;
    }

    return result;
}