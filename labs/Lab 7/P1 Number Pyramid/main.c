// Nelson Diaz

/*
Menu-based program tha will print a pyramid given
a max_value (assuming max_value >= 1).
*/

// pre-processor directive
#include <stdio.h>

// prototypes
void print_triangle(int max_value);

// driver function
int main(void)
{
    // variable declaration
    int max_value = 0; // user input
    int count = 0; // iteration counter
    int ch = 1;
    
    // menu loo
    while (ch)
    {
        // prompt user input
        printf("Enter max value: ");
        scanf("%d", &ch);

        // function call
        print_triangle(ch);

        // increment the counter after a triangle is printed
        count++;

        // prompt the user again if they want new triangle or exit
        printf("Enter 0 for exit or any other digit to continue: ");
        scanf("%d", &ch);
    } 
    
    printf("Total triangle printed: %d", count);

    return 0;
}

/*
function prints triangle with a size
given by the user.
*/ 

void print_triangle(int max_value)
{
    int i, j, k, l;

    // track how many lines. i will be the line number
    for(i = 1; i <= max_value; i++)
    {
        // need to print n-1 spaces
        for (j = 1; i <= max_value - 1; j++)
        {
            printf(" ");
        }
        
        // print numbers from 1 to i
        for (k = 1; k <= i; i++)
        {
            printf("%d", k);
        }
        
        // print number from i-1 to 1
        for(l = i - 1; l >= 1; l--)
        {
            printf("%d", l);
        }

        // printing next line after a line
        printf("\n");
    }
}