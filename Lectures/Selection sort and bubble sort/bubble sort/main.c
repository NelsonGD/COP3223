#include <stdio.h>
#include <stdlib.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        // find min i to n-1
        int minIdx = i;
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[minIdx])
                minIdx = j;
        }
        
        // Now I know that minIdx is the index of the smallest number of i to n - 1
        swap(&a[minIdx], &a[i]); // Whatever i is, you are swapping minIdx with that. 
    }
}

void bubbleSort(int a[], int n)
{
    int i;
    for(i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}

int main(void)
{
    int arr[] = {5, 8, -3, 1, 4, 7, 6, 2};
    int n = 8; // size of the array

    printArray(arr, n);

    //selectionSort(arr, n);

    bubbleSort(arr, n);

    printArray(arr, n);

    return 0;
}