// Nelson Diaz

// Summary of the code

// pre-processor directives
#include <stdio.h>
#include <math.h>

// driver function
int main(void)
{

    // variable declaration
    char ch;

    // prompt the user for the input
    printf("Enter a Character: ");
    scanf("%c", &ch);

    // check that it is an upper case letter
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n%c is a capital letter. ", ch);

        int position = ch - 'A';

        printf("The letter number is %d in the alphabet.\n", position + 1);
    }

    // check for the lower case letter
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n%c is a small case letter. ", ch);

        int position = ch - 'a';

        printf("The letter number is %d in the alphabet.\n", position + 1);
    }
    
    // check for the digits
    else if (ch >= '0' && ch <= '9')
    {
        printf("\n%c is a digit.\n", ch);

        // find the location of the digit within the digit interval
        int number = ch - '0';

        printf("The square root of %d is %.2f\n", number, sqrt(number));
    }
    
    // we need to deal with the special characters
    else
    {
        printf("\n%c is a special symbol.\n", ch);
    }


    return 0;
}   