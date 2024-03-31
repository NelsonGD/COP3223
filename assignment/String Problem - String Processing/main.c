// Nelson Diaz

// pre-processor directive 
#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 101 //maximum string length will be 100 + 1 for '\0'


int getLength(char s[])
{
    int length = 0;

    // loop through array of chars
    while(s[length] != 0) // stop when terminator found
    {
        length++; // increment per letter
    }

    return length;
}

int is_equal(char s1[], char s2[])
{
    int i = 0;
    while(s1[i] == s2[i])
    {
        if(s1[i] == '\0' || s2[i] == '\0')
            break;
        i++; 
    }

    if(s1[i] == '\0' && s2[i] == '\0')
        return 1;
    else
        return 0;
}


void str_copy(char dest[], char source[])
{
    int i = 0;
    // Copy characters from source to dest until '\0' is encountered
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }

    dest[i] = '\0'; // Add the null terminator to the end of dest
}

void str_reverse(char s[])
{
    int x;
    int i = 0;
    char line[getLength(s) + 1];

    for (x = getLength(s) - 1; x >= 0; x--) {
        char tmp = s[x];
        line[i] = tmp;
        i++;
    }

    for(x = 0; x < getLength(s); x++)
    {
        s[x] = line[x];
    }
}

int is_palindrome(char s[])
{
    char s2[MAX_LENGTH];

    str_copy(s2, s); // copying string to compare to

    str_reverse(s2); // reversing copied string

    return is_equal(s, s2); // comparing strings
}

void capitalize_word(char *str)
{
    int i = 0;
    
    // Capitalize the first character of the string
    if (str[i] != '\0' && islower(str[i]))
        str[i] = toupper(str[i]);
        
    // Loop through each character of the string
    while (str[i] != '\0') {
        // If the current character is a space
        if (str[i] == ' ') {
            i++; // Move to the next character
            
            // If the next character is lowercase, capitalize it
            if (str[i] != '\0' && islower(str[i]))
                str[i] = toupper(str[i]);
        } else {
            // If the current character is uppercase, convert it to lowercase
            if (isupper(str[i]))
                str[i] = tolower(str[i]);
        }
        
        i++; // Move to the next character
    }
}

void swap(char *a, char *b)
{
    char temp; // temporary variable

    temp = *a;
    *a = *b;
    *b = temp;
}

// driver function 
int main(void) {

  char s1[MAX_LENGTH];
  char s2[MAX_LENGTH];
  char x;


  printf("Enter a string: ");
  scanf("%[^\n]s", s1);

  while((x=getchar() != '\n') && x != EOF); // loop to discard \n from last input and not to skip the next input

  printf("Enter another string: ");
  scanf("%[^\n]s", s2);


  printf("\nThe length of your first string is %d\n", getLength(s1));
  printf("The length of your second string is %d\n", getLength(s2));

  if(is_equal(s1, s2)==1)
  {
    printf("You entered two equal strings.\n");
  }
  else
  {
    printf("Your strings are different.\n");
  }

  if(is_palindrome(s1)) //make sure you do not change the string
  {
      printf("%s is a palindrome string\n", s1);
  }
  else
  {
      printf("%s is not a palindrome string\n", s1);

  }

  capitalize_word(s1);
  printf("Capitalized s1 is %s ", s1);


  return 0;
}

