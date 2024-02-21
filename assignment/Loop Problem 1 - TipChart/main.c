// Nelson Diaz

#include <stdio.h>
#include "main.h"

void printTipChart(int min_price, int max_price); // Function prototype declaration

int main(void) {
    int min_price, max_price; // Variables to store user input
    int valid_charts = 0; // Counter for valid charts

    while (1) { // Loop for user input
        printf("Enter the minimum and maximum meal values: "); // Prompt for input
        scanf("%d %d", &min_price, &max_price); // Read user input

        if (min_price < 0 || max_price < 0) { // Check for negative input
            break; 
        }

        if (min_price <= max_price) { 
            printTipChart(min_price, max_price); 
            valid_charts++; 
        }
    }

    printf("You have printed total %d valid charts\n", valid_charts);

    return 0;
}

// Function to print tip chart for a given range of meal prices
void printTipChart(int min_price, int max_price) {
    printf("\n");
    for (int i = min_price; i <= max_price; i++) { // Loop through meal price range
        double tip_amount = i * TIP_RATE;
        printf("On a meal of $%d, the suggested tip amount $%.2lf\n", i, tip_amount);
    }
}
