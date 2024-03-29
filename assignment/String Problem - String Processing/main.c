// Nelson Diaz

// pre-processor directive 
#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 101 //maximum string length will be 100 + 1 for '\0'


int getLength(char s[])
{
    // int counter = 0;
    int length;

    for(length = 0; s[length] != '\0'; length++)

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
    
}

void str_reverse(char s[]);
int is_palindrome(char s[]);
void capitalize_word(char *str);
void swap(char *a, char *b);

 

int main(void) {

  char s1[MAX_LENGTH];
  char s2[MAX_LENGTH];
  char x;


  printf("Enter a string: ");
  scanf("%[^\n]s", s1);

  while((x=getchar() != '\n') && x != EOF); //loop to discard \n from last input and not to skip the next input

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

