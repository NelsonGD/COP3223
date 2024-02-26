// Nelson Diaz

/*
Utility functions to process arrays.
*/

// pre-processor directive
#include <stdio.h>
#include <main.h>

int main(void)
{
    int myArray[SIZE], revArray[SIZE], i, j;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i + 5);
        scanf("%d", &myArray[i]);
    }

    display(myArray, SIZE);
    
    printf("The sum of myArray is: %d\n", sumArray(myArray, SIZE));

    printf("The max value of myArray is: %d\n", ...)
    
    // print to double value of all the numbers within the array
    for(i = 0; i < SIZE; i++)
    {
        printf("Double of %d\n", myArray[i], getDouble[i]);
    }

    // copy array from backwards to front of original array
    for(i = 4, j = 0; i >= 0; i--, j++)
    {
        revArray[j] = myArray[i];
    }

    printf("Now the following data are from RevArray\n");
    // Most of the processes were done for the original array, redo them for the reversed array

    // display the array

    // print the sum of the reversed array

    // print the max value within the reverse array

    for(i = 0; i < SIZE; i++)
    {
        printf("Double %d is %d\n", revArray[i], getDouble(revArray[i]));
    }

    return 0;
}

int sumArray(int array[], int size)
{
    // declare a variable called sum = 0
    
    // declare a conunter for your loop

    // runa loop that goes over your whole array
        // sum += access the array at the correect location to retrieve the value

    return sum;
}

int findMax(int array[], int size)
{
    // Recording posted on it in the array module

}

int getDouble(int number)
{
    return number * 2;
}

void display(int array[], int size)
{
    // covered with hints in the slides

    // declare a counter

    // loop through your array up to size
    
        // printf and then access the array at the correct balance

    // print a new line
    printf("\n");

}