// Nelson Diaz

/*
Program utilizes two functions that will take list from user
and sort  them alphabetically using selection sort. Then ask
and print substring and where it is found.
*/

// pre-processor directive
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

// Sorts string alphabetically. Not case sensitive 
void selection_sort(char names[][MAXLENGTH], int n)
{
    int i, j;
    char temp[MAXLENGTH];

    for(i = 0; i < n; i++)
        to_lower(names[i]);

    for(i = 0; i < n - 1; i++)
    {
        int min_idx = i;

        for(j = i + 1; j < n; j++)
        {
            // if value j < min_idx then update min
            if(strcmp(names[j], names[min_idx]) < 0)
                min_idx = j;
        }

        strcpy(temp, names[i]);
        strcpy(names[i], names[min_idx]);
        strcpy(names[min_idx], temp);
    }
}

// Loop through string and convert to lower case.
void to_lower(char *s)
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        s[i] = tolower(s[i]);
    }
}

int main(void)
{
    // variable declaraction and array of string
    char names[MAXSTRINGS][MAXLENGTH];
    int n;
    char x;

    printf("Enter how many names: ");
    scanf("%d", &n);

    // take n strings as input
    for(int i = 0; i < n; i++)
    {
        while((x = getchar()) != '\n' && x != EOF); // cleans \n from input

        printf("Name %d: ", i + 1);
        scanf("%[^\n]s", names[i]); // takes input and includes spaces
    }

    // call selection sort to sort the data gathered
    selection_sort(names, n);

    // print sorted names converted to lower case
    printf("Sorted Names: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
    printf("\n");

    char searchKey[MAXLENGTH];

    // build menu based system
    // while loop is best or break because variable amount runs
    while (1)
    {
        while((x = getchar()) != '\n' && x != EOF);

        int found = 0;

        printf("Enter search string: ");
        scanf("%[^\n]s", searchKey);
        
        to_lower(searchKey);

        if(strcmp(searchKey, "exit") == 0)
            break;


        for(int i = 0; i < n; i++)
        {
            char lowercaseName[MAXLENGTH];
            strcpy(lowercaseName, names[i]);
            to_lower(lowercaseName); // convert name to lowercase

            if(strstr(names[i], searchKey))
            {
                found = 1;
                printf("%s\n", names[i]);
            }
        }

        if(!found)
            printf("not found\n");
    }

    printf("bye!");

    return 0;
}
