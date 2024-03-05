// Nelson Diaz

/* Code using Bubble sort and Selection sort. It
simulates the status of the array at different steps. */

// pre-processor directive
#include <stdio.h>
#define MAX_SIZE 50000

// Function that prints elements of array.
void display_array(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* Function bubble sorts the array and prints each iteration */
void bubble_sort(int arr[], int size)
{
    int i, temp;
    for (i = 0; i < size-1; i++)
    {
        printf("Iteration# %d\n", i+1);
        for(int j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // swapping
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

            // printing each iteration of array
            display_array(arr, size);
        }
    }

    // print bubble sorted array
    printf("Sorted array using Bubble Sort:\n");
    display_array(arr, size);
}

void selection_sort(int arr[], int size)
{
    int temp, i, j;

    for(i = 0; i < size - 1; i++)
    {
        printf("Iteration# %d\n", i+1);
        // find min i to n -1
        int minIdx = i;
        for(j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }

        // swapping
        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;

        display_array(arr, size);
    }

    // Display array
    printf("Sorted array using Selection Sort:\n");
    display_array(arr, size);
}

void copy_array(int destination[], int source[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        destination[i] = source[i];
    }

    // CHECK IF ARRAY WAS COPIED CORRECTLY
    // for(i = 0; i < size; i++) {
    //   printf(" %2d      %2d\n", source[i], destination[i]);
    // }
}

// driver function
int main(void)
{
    // variable and array declaration
    int size, arr[MAX_SIZE], sortArr[MAX_SIZE], i;

    // taking user input
    printf("How many numbers to sort?\n");
    scanf("%d", &size);

    // loop to take input and put into array
    for(i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // call copy array function to keep OG array
    copy_array(sortArr, arr, size);

    // PRINTING ARRAY:

    // print OG array
    printf("Array before sorting:\n");
    display_array(arr, size);
    
    // call bubble sort function
    printf("Using Bubble sort\n");
    bubble_sort(sortArr, size);


    // Resetting array to original order by copying original
    copy_array(sortArr, arr, size);

    // call selection_sort function
    printf("Using Selection Sort\n");
    selection_sort(sortArr, size);

    return 0;
}