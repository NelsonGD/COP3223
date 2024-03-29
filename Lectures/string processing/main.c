// pre-processor directive
#include <stdio.h>
#include <ctype.h>
#include <string.h>



// driver fucntion
int main(void)
{
    char fn[20], ln[20],  fulln[40];

    printf("Enter your first name:");
    scanf("%s", fn);

    printf("Enter your last name:");
    scanf("%s", ln);

    int l = strlen(fn);
    printf("The length of your first name is %d\n", l);

    int cmp = strcmp(fn, ln);

    if(cmp < 0)
        printf("Your first name comes first alphabetically\n");
    else if(cmp > 0)
        printf("Your last name comes first alphabetically");
    else
        printf("Your name is weird\n");
    
    strcat(fn, ln);
    printf("FN is now %s\n", fn);

    strcpy(fulln, ln);
    printf("Full name is %s\n", fulln);

    char key[10];
    printf("Enter a search key: ");
    scanf("%s", key);

    char *ch = strstr(fulln, key);
    if(ch == NULL)
        printf("Not found");
    else
        printf("Found it. Remaining part of name %s\n", ch);

    return 0;
}