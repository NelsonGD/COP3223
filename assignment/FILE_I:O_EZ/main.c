// Nelson Diaz

/*
Program reads data from a given txt file char by char
and converts everthing to uppercase in another file.
*/

// pre-processor directive
#include <stdio.h>
#include <ctype.h>


// function checks if character is vowel
int isVowel(char c) {
    c = tolower(c); // converting to lowercase
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {

    // variable declaration
    char inputFileName[31], outputFileName[31];

    // getting user input
    scanf("%30s", inputFileName);
    scanf("%30s", outputFileName);

    FILE *inputFile = fopen(inputFileName, "r");
    FILE *outputFile = fopen(outputFileName, "w");

    // logic for error opening file
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // counter for txt file info
    int charCount = 0, vowelCount = 0, digitCount = 0;
    char c;

    // read characters from input file
    while ((c = fgetc(inputFile)) != EOF) {
        // skip count for newline and special characters
        if (c == '\n' || !isprint(c)) {
            continue;
        }

        // counting charactera
        charCount++;
        
        if (isalpha(c)) {
            // convert to uppercase and write to output file
            fputc(toupper(c), outputFile);
            
            if (isVowel(c)) {
                vowelCount++;
            }
        } else if (isdigit(c)) {
            digitCount++;
        }
    }

    // close files
    fclose(inputFile);
    fclose(outputFile);

    // display information
    inputFile = fopen(inputFileName, "r");
    while ((c = fgetc(inputFile)) != EOF) {
        printf("%c", c);
    }
    fclose(inputFile);
    
    printf("\nNumber of characters: %d\n", charCount);
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of digits: %d\n", digitCount);

    return 0;
}

