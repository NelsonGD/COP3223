// Nelson Diaz

/*
Program takes 5 numbers for an array, displays these ones,
then finds the sum of all elements and displays it, then
finds biggest number in array and displays it, then find
and prints the double of each number in array, then repeats
the same process but with the array order flipped.
*/

// pre-processor directive
#include <stdio.h>
#include "main.h"

int main(void)
{
    // variables declaration
    int myArray[SIZE], revArray[SIZE], i, j;

    // Obtaining and putting data in array.
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }

    display(myArray, SIZE);
    
    printf("The sum of myArray is: %d\n", sumArray(myArray, SIZE));

    printf("The max value of myArray is: %d\n", findMax(myArray, SIZE));
    
    // print to double value of all the numbers within the array
    for(i = 0; i < SIZE; i++)
    {
        printf("Double of %d is %d\n", myArray[i], getDouble(myArray[i]));
    }

    // copy array from backwards to front of original array
    for(i = 4, j = 0; i >= 0; i--, j++)
    {
        revArray[j] = myArray[i];
    }

    printf("Now the following data are from RevArray\n");
    // Most of the processes were done for the original array, redo them for the reversed array

    // display the array
    display(revArray, SIZE);
    // print the sum of the reversed array
    printf("The sum of revArray is: %d\n", sumArray(revArray, SIZE));
    // print the max value within the reverse array
    printf("The max value of revArray is: %d\n", findMax(myArray, SIZE));

    for(i = 0; i < SIZE; i++)
    {
        printf("Double of %d is %d\n", revArray[i], getDouble(revArray[i]));
    }

    return 0;
}

// Function returns the sum of all elements in an array.
int sumArray(int myArray[], int size)
{
    // declare a variable called sum = 0
    int sum = 0;
    
    // declare a conunter for your loop
    int i;

    // runa loop that goes over your whole array
    for ( i = 0; i < size; i++)
    {
        /* code */
        // sum += access the array at the correect location to retrieve the value
        sum += myArray[i];
    }
    

    return sum;
}

// Function finds the biggest element in array through loop.
int findMax(int myArray[], int size)
{
   /*
   Loop compares which element in array is bigger
   and returns biggest value.
   */

   int maxNum = myArray[0];
   for (int i = 1; i < size; i++)
   {
        if(myArray[i] > maxNum)
        {
            maxNum = myArray[i];
        }
   }
   
   return maxNum;
}

// Finds double of element in array.
int getDouble(int number)
{
    return number * 2;
}

// Function prints elements in an array.
void display(int myArray[], int size)
{
    // declare a counter
    int i;
    // loops through array up to size
    for ( i = 0; i < size; i++)
    {
        // printf and then access the array at the correct balance
        printf("%d ", myArray[i]);
    }

    printf("\n");

}