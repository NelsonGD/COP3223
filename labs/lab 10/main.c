// Nelson Diaz

/*
Program takes a set of character into an array and then
display the statistics on how many times the user has
entered a letter in the alphabet and its percentage.
Then, program reverses the array and then displays it.
*/

// pre-processor directive
#include <stdio.h>
#include <ctype.h>
#define MAXCHAR 50
#include "main.h"

void char_swap(char *x, char *y)
{
    // direfencing
    char temp = *x;
    *x = *y;
    *y = temp;
}

void getData(char arr[], int *n, int counters[26])
{
    char x, ch;
    printf("How many characters?: ");
    scanf("%d", n);

    for(int i = 0; i < *n; i++)
    {
        while((x = getchar() != '\n') && x != EOF)
        
        printf("Enter character %d:", i + 1);

        arr[i] = getchar();

        if((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
        {
            arr[i] = tolower(arr[i]);
            counters[arr[i] - 'a']++;
        }
    }
}

void displayStat(int *c, int total_char)
{
    for(int i = 0; i < 26; i++)
    {
        printf("%c\t%d\t%.2f\n", 'a' + i, c[i], c[i] * 100.0/total_char);
    }
}

void displayArray(char *a, int size)
{
    printf("The char array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%c ", a[i]);
    }
}

void reverse(char a[], int size)
{
    int last_index = size - 1;
    for(int i = 0; i < size / 2; i++)
    {
        char_swap(&a[i], &a[last_index - 1]);
    }
}

int main(void)
{
    int counters[26];
    
    char myArr[MAXCHAR];

    int i, total_char;

    for(i = 0; i < 26; i++)
    {
        counters[i] = 0;
    }

    getData(myArr, &total_char, counters);
    displayArray(myArr, total_char);
    printf("\n");
    displayStat(counters, total_char);
    reverse(myArr, total_char);
    printf("Array reversed.\n");
    displayArray(myArr, total_char);

    return 0;
}