// Nelson Diaz

/*
Program will be given an array which
through functions, this one will be
manipulated in certain ways. 
*/

// pre-processor directive
#include <stdio.h>
#define SIZE 5

// Function prototypes
/*
Function takes int array and size, and 
prints the data in the array.
*/
void display(int array[], int size);
int sumArray(int array[], int size);
int maxValue(int array[], int size);
int getDouble(int num);

// driver function
int main(void)
{
    int Arr[SIZE], revArr[SIZE], i, j;
    
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &Arr[i]);
    }
    
    display(Arr, SIZE);
    
    printf("The sum of Arr is: %d\n", sumArray(Arr, SIZE));
    
    printf("The max value of Arr is: %d\n", maxValue(Arr, SIZE));
    
    // Loop that will print double of each item in the array.
    for(i = 0; i < SIZE; i++){
        printf("Double of %d is %d\n", Arr[i], getDouble(Arr[i]));
    }
    
    printf("Now the following data are from RevArray\n");
    
    for(i = 4, j = 0; i >= 0; i--, j++)
    {
        revArr[j] = Arr[i];
    }
    
    display(revArr, SIZE);
    
    printf("The sum of Arr is: %d\n", sumArray(revArr, SIZE));
    
    printf("The max value of Arr is: %d\n", maxValue(revArr, SIZE));
    
    // Loop that will print double of each item in the array.
    for(i = 0; i < SIZE; i++){
        printf("Double of %d is %d\n", revArr[i], getDouble(revArr[i]));
    }
    
    return 0;
}

void display(int array[], int size)
{
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int sumArray(int array[], int size)
{
    int sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

int maxValue(int array[], int size)
{
    int max = 0;
    for(int i = 0; i < 5; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    
    return max;
}

int getDouble(int num){
    return num * 2;
}