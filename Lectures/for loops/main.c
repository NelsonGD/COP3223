// Nelson Diaz

/*
Program about for loops
*/

#include <stdio.h>

int sumevens(int n)
{
    int sum = 0;
    for(int counter = 2; counter <= n; counter +=2)
    {
        sum += counter;
        // printf("%d\n", counter);
    }
    return sum;
}

void printNum(int start, int end)
{
    // Code will print all even number from then start to the end variables based on what's given on the driver function.
    if(start%2==1)
        start++;
    int counter;
    for(counter = start; counter <= end; counter += 2)
        printf("%d\n", counter);

    // This code will print number 1-5 and stop when counter is 6
    // for(counter = 1; counter <= 5; counter++) 
    //     printf("%d\n", counter);

    // This code will print all even number to until 10.
    // for(counter = 2; counter <= 10; counter+=2) 
    //     printf("%d\n", counter);
}

int main(void)
{
    printf("Counter is now %d\n", sumevens(1));
    return 0;
}