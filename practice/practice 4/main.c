// Nelson Diaz

/*
The point of file is to practice over everything we went over during last class, see how conditional expressions work,
and further improve my knowldeg on things like if-esle estatements, conditional expressions, and operators.
Conditional statements: == (equal), != (not equal), < (less than), > (more than), <=/>= (less/more than or equal to)
*/

// pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{
    
    // variable declaration
    int a = 9, b = 0, result, difference;

    // prompt user for input
    printf("Give two different numbers and I will make them equal: ");
    scanf("%d %d", &a, &b);

    if(a > b)
    {
        printf("a is greater than b.\n");

        difference= a - b;
        result = b + difference;

        printf("The difference of the numbers is %d.\n", difference);
        printf("\nNow a and b are equal. a = %d b = %d");
        
    }
    else if(b > a)
    {
        difference = b - a;
        result = a + difference;
    }

    return 0;
}