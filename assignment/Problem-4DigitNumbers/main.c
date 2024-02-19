// Nelson Diaz

/*
Codes takes four-digit positive integer as input. Takes this number and those the following task;
1) Takes integer as a parameter and returns 1 if the number is 4 digit number, otherwise returns 0.
2) Checks if it's 4-digit number, then reverses it and returns it. If not possible then returns -1.
3) Adds first and last digit of number and prints their sum. If not then prints invalid message.
4) Checks if the number can be reverses then compares it to the original and if they are the same
then the number is a palindrome and returns 1, else returns 0, and returns -1 if it recieves -1
from reverse4Digit() function.
*/

// pre-processor directive
#include <stdio.h>

/* 
Function 1. Takes integer as a parameter and returns 1 if the number is 4 digit number, otherwise returns 0.
*/
int isFourDigit(int num)
{
    if(num >= 1000 && num <= 9999)
    {
        return 1;
    }else{
        return 0;
    }
}

// Function 2: Takes num and reverses the number and returns it.
int reverse4Digit(int num)
{
    // variable declaration
    int d1, d2, d3, d4, rnum;

    // calling isFourDigit to check if number is 4 digits, if not return -1.
    if(isFourDigit(num))
    {
        // Begin the process of extracting digits
        d1 = num % 10;
        num = num / 10;

        d2 = num % 10;
        num /= 10;

        d3 = num % 10;
        num /= 10;

        d4 = num % 10;
        num /= 10;

        rnum = d4 * 1 + d3 * 10 + d2 * 100 + d1 * 1000;

        return rnum;
    }else{
        return -1;
    }
}

/*
Function 3: Addition of first and last digits of num using isFourDigit 
passing num as a parameter
*/

int addSides4Digit(num)
{
    int num = isFourDigit(num);

    if(isFourDigit(num))
    {
        int d1, d4, dsum;

        d4 = num % 1000;
        num /= 1000;

        d1 = num % 10;

        dsum = d1 + d4;
    }
}


// driver function
int main(void)
{
    int num;

    printf("Enter a four digit number: ");
    scanf("%d", &num);
    
    // Calling reverse4Digit with fourDigitNum stored, and build logic for valid and invalid cases.
    if(reverse4Digit(num) != -1)
    {
        int rnum = reverse4Digit(num);
        printf("Reverse is: %d\n", rnum);
    }else{
        printf("Invalid to reverse\n");
    }

    // Calling addSides4Digit() function with logic that will print valid or invalid according to the case.
    int dsum = addSides4Digit(num);

    return 0;
}