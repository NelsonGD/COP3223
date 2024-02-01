// Nelson Diaz

/*
Program takes cost price and selling price of an item as input.
Then the program should determine where the seller has made a profit or a loss.
*/

// pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{
    // variable declaration
    float costP, sellingP, profit, loss;

    // Prompt user for input
    printf("Enter the cost price and selling price: ");
    scanf("%f %f", &costP ,&sellingP);

    // logic
    if(sellingP > costP)
    {
        profit = sellingP - costP;
        printf("\nYou made a profit.\nThe amount of profit is $%0.2f\n", profit);
    }
    else if(sellingP < costP)
    {
        loss = costP - sellingP;
        printf("\nYou incurred loss.\nThe amount of loss is $%0.2f\n", loss);
    }

    return 0;
}