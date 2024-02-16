// Nelson Diaz

/*
Program prints out all Armstrong numbers between 1 and n
where n will be a user input.
*/   

#include <stdio.h>

int sumDigitCube(int n)
{
    int digit;
    int sum = 0; // Needs to be defines so it doesn't get added to garbage value later on.
    
    // looping process
    while (n > 0){
        //extracting the digit
        digit = n % 10;

        // process the sum
        sum += digit * digit * digit;

        // trim your number.
        n /= 10;
    }

    return sum;
}

// driver function
int main(void)
{
    int n; // Will store number given by user.
    int sum; // Stores the sum of the cubes for the number. 
    int i;

    // prompt the user for the n
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The Armstrong numbers are:\n");
    for(i = 1; i <= n; i++)
    {
        sum = sumDigitCube(i);
        if(i == sum)
            printf("%d\n", i);
    }

    return 0;
}
