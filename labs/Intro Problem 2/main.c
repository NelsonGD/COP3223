// pre-processor directive
#include <stdio.h>

// driver function
int main(void){

    // Variables to store values
    float tempF, tempC;

    // Prompt user for input
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &tempF);

    // Equation convertin Farenheit to Celsius
    tempC = (5.0/9.0)*(tempF - 32.0);

    // Display value in Celsius
    printf("\nThe temperature in Celsius is: %f\n", tempC);

    return 0;
}