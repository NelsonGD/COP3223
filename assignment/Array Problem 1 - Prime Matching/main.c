// Nelson Diaz

/* Program matches all the common prime numbers within
two given list of integers */

// pre-processor directive
#include <stdio.h>
#define SIZE 200

// function takes inputs for arrays
void getData(int a[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
}

// function that displays array (used to check if code running correctly)
void displayArray(int a[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

// Function returns 1 if number is prime, 0 if number not prime.
int isPrime(int n)
{
    int i, k, isPrime = 1;

    // especial case for 1 not being a prime
    if(n <= 1)
    {
        isPrime = 0;
    }else{
        /* checking up to n/2 because any more than that
        is automatically not a factor */
        for(i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    return isPrime;
}

/* Function prints common prime numbers in two array and
shows count of how many prime numbers are common in them.*/
void PrimeMatching(int a[], int size1, int a2[], int size2)
{
    int i, k;
    int commonPrime = 0; // flag for common primes

    printf("Common prime numbers are: ");
    for(i = 0; i < size1; i++)
    {
        // sending number from list 1 to check if prime
        if(isPrime(a[i]))
        {   
            // loop comparing prime from list 1 to all nums in list 2
            for(k = 0; k < size2; k++)
            {
                // print number if matches prime from list 1
                if (a[i] == a2[k])
                {
                    printf("%d ", a[i]);
                    commonPrime++;
                    break;
                }
                
            }
        }
    }
    // if not common primes are found
    if(!commonPrime)
    {
        printf("None");
    }
    printf("\n");

    // print common count
    printf("Common count: %d\n", commonPrime);

}

// Function finds and prints smallest and biggest number in array
void filterArray(int a[], int size)
{
    int i, biggie = a[0], smallest = a[0];

    for(i = 1; i < size; i++)
    {
        if(biggie < a[i])
        {
            biggie = a[i];
        }
    }

    for (i = 1; i < size; i++)
    {
        if(smallest > a[i])
        {
            smallest = a[i];
        }
    }

    printf("Smallest number in the second list: %d\n", smallest);
    printf("Largest number in the second list: %d\n", biggie);
}

// driver function
int main(void)
{
    // variable declaration
    int n, m, a[SIZE], a2[SIZE];

    // obtain user input
    printf("Enter n and m: ");
    scanf("%d %d", &n, &m);

    // ask user to input data for each list
    printf("Enter data for first list: ");
    getData(a, n);
    
    printf("Enter data for second list: ");
    getData(a2, m);

    // call PrimeMatching() which prints information accordingly
    PrimeMatching(a, n, a2, m);

    // call function to find smallest and largest number and print
    filterArray(a2, m);

    return 0;
}