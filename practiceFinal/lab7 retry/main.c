// pre-processor directive
#include <stdio.h>

/*
Documentaion:
- Counter for loops:
    - Printing spaces before number (j)
        - spaces = n - i
    - Ascending numbers counter (k)
        - upper bound is i, going from 1 to i
    - Descending numbers counter (l)
        - would be i - 1
    - Counter for all loops that will go row by row. (i)
        - Will go to size n, inclusive.
*/

// function prototypes
void Print_Triangle();

// driver function
int main(void)
{
    // variable declaration
    int n;

    // gathering user input
    printf("Size of pyramid: ");
    scanf("%d", &n);

    Print_Triangle;

    return 0;
}

void Print_Triangle(int n)
{
    
}