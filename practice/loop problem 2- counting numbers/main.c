// Nelson Diaz

/*
Keeps taking integers until the user enters -100.
Program displays the count of positive, negative
(excluding that -100) and zeros entered.
*/

// pre-processor directie
#include <stdio.h>

//driver function
int main(void)
{   
    // variable declaration
    int num, negNum =0, posNum=0, Zeros=0;

    printf("Input the number:\n");

    // get out when num = -100
    while(num != -100)
    {   
        // distinguish between +, -, and 0 nums.
        scanf("%d", &num);
        if(num > 0)
            posNum++;
        else if(num < 0 && num != -100)
            negNum++;
        else if(num == 0)
            Zeros++;
    }

    printf("Number of positive numbers: %d\n", posNum);
    printf("Number of negative numbers: %d\n", negNum);
    printf("Number of Zero: %d\n", Zeros);

    return 0;
}