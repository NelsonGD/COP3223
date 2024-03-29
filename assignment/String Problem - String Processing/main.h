// function takes string and returns length of string
int getLength(char s[]);

// takes two strings and returns 1 if both are the same, otherwise returns 0
int is_equal(char s1[], char s2[]);

/*
Takes two strings as parameters and copies the source string
to destination.
*/
void str_copy(char dest[], char source[]);

// Takes references of two characters and swaps them
void swap(char *a, char *b);

// Function takes a string in the parameter and reverses the string.
void str_reverse(char s[]);

// Function chekcs if reverse is palindrome.
int is_palindrome(char s[]);
// Function takes string and updates first character of each word to upper case.
void capitalize_word(char *str);