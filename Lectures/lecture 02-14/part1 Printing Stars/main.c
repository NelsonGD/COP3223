// pre-processor directive
#include <stdio.h>

void printStarTriangle(int n)
{
    /*
    Line # decides the # of stars.
    */
    for(int line = 1; line <= n; line++)
    {
        for(int star = 1; star <= line; star++)
        {
            printf("*");
        }
        printf("\n"); // Inside of first loop so it prints after EVERY "*" is printed and not after EACH ONE.
    }
}

// driver function
int main(void)
{
    int n;
    printf("How many line? ");
    scanf("%d", &n);

    printStarTriangle(n);

    return 0;
}