// Nelson Diaz

/*

This problem highlights the use of while loops and also how to "flush" the value that were
previously taken by a scanf. You do this because unless done so, the following scanf for
the while loop will be skipped. So use:

char c;
while((c = getchar()) != '\n' && c != EOF); // getchar() is able to extract the value of a variable.

*/

#include <stdio.h>

int main(void)
{
    char choice;

    printf("Menu:\n+: add\n-: substract\n*: Multiply\n/: divide\ne: exit\nEnter your choice: ");
    scanf("%c", &choice);

    while(choice != 'e')
    {
        int n1, n2;
        printf("Enter two numbers: ");
        scanf("%d%d", &n1, &n2);

        if(choice == '+')  
            printf("%d + %d = %d\n", n1, n2, n1+n2);
        else if(choice == '-')
            printf("%d - %d = %d\n", n1, n2, n1-n2);
        else if(choice == '*')
            printf("%d * %d = %d\n", n1, n2, n1*n2);
        else if(choice == '/')
            printf("%d / %d = %d\n", n1, n2, n1/n2);

        printf("Menu:\n+: add\n-: substract\n*: Multiply\n /: divide\n e: exit\n Enter your choice: ");

        char c;
        while((c = getchar()) != '\n' && c != EOF); // getchar() is able to extract the value of a variable.
        scanf("%c", &choice);
    }

    printf("Thanks for using our calculator\n");

    return 0;
}