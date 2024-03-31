// pre-processor dircetive
#include <stdio.h>
#include <ctype.h>

int getLength(char *str)
{
    // int counter = 0;
    int i;

    for(i = 0; str[i] != '\0'; i++) // This is valid too.

    return i;
}

int isequal(char *str1, char *str2)
{
    int i = 0;
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' || str2[i] == '\0')
            break;
        i++; 
    }

    if(str1[i] == '\0' && str2[i] == '\0')
        return 1;
    else
        return 0;
}

// Loop to convert to upper case letter
void str2Upper(char *s)
{   
    // looping through string (which is array of characters)
    for(int i = 0; s[i] != '\0'; i++)
    {
        s[i] = toupper(s[i]);
    }
}

// reversing a string


int main(void)
{
    // 1st PART 
    // char ch;

    // while((ch = getchar()) != '0')
    // {
    //     if(isupper(ch))
    //     {
    //         ch = tolower(ch);
    //         putchar(ch);
    //     }else if(islower(ch))
    //     {
    //         ch = toupper(ch);
    //         putchar(ch);
    //     }
    //     else if(isdigit(ch))
    //         printf("This is a digit\n");
    // }

    char str[50] = "cat hat";
    printf("The lenght is %d\n", getLength(str));

    char s1[50] = "cat hat";
    char s2[50] = "cat hat";

    

    if(isequal(s1, s2))
        printf("Same!");
    else
        printf("not same!");

    // Part 2 of Lecture
    // printf("Enter a string: ");
    // //scanf("%[^\n]s", str); // Takes input until new line

    // fgets(str, 4, stdin); // Can especify how many characters
    // // gets(str);
    // // scanf("%s", str); // Only takes a single word str

    // printf("You have entered: ");
    // printf("%s", str);

    return 0;
}