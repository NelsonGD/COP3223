/*
1) char by char -> fgetc
2) line by line -> fgets
3) type by type -> fscanf

Definitions:
*ifp: input, file, pointer (reading)
*ofp: output, file, pointer (writing)

fopen("this changes your file name", "string mode operation")

Different values for mode are as follows:
- r    open a file for reading
- w    create a file for writing // if you have file with the same name, it will replace the file
- a    append to a file
- r+   open a file for read/write. File must exist
- w+   create a file for read/write. 
        - Opens text file in both reading and writing mode
          If file exists, it's truncated first before overwriting.
          Any old data will be lost. If file doesn't exist, new
          file will be created. 
- a+   Append or create a file for read/write. // File
       created doesn't have to exist.
- There are many other modes available.

EOF is a specia. character, it's invisible.
    Has marker, so kinda like marker.


*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *ifp, *ofp;
    char filename[100];
    
    printf("Enter the name of the input file: ");
    scanf("%s", filename);

    ifp = fopen(filename, "r"); // This will open file in read mode

    ofp = fopen("output.txt", "w"); 

    if(ifp == NULL || ofp == NULL)
    {
        printf("Unable to open the file\n");
        exit(1); // 1 helps you get out
    }

    char ch = fgetc(ifp);
    // printf("ch is %c\n", ch);
    // ch = fgetc(ifp);
    // printf("ch is %c\n", ch);

    while(ch != EOF)
    {
        printf("%c", ch);
        fputc(ch, ofp);
        ch = fgetc(ifp);
    }
    // to release file
    fclose(ifp);
    fclose(ofp);

    return 0;
}