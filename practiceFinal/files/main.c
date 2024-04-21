// pre-processor directive
#include <stdio.h>
#include <stdlib.h>

/*
NOTES:

Different modes for opening file:
    - "r"   read    fopen()return NULL if the file doesn't exist
    - "w"   write   create a new file if it doesn't exist
    - "a"   append  create a new file if it doesn't exist
    - "r+"  both read and write     foepn() returns NULL if the file doesn't exist
*/

// driver function
int main(void)
{
    /*
    Closing a file; perform operations on a file, need to close it. fclose() fucntion for that.
    */
    // create a file pointer
    FILE *ptr;

    // open a file
    ptr = fopen("main.txt", "w");

    // perfrom file operations

    // close the file
    fclose(ptr);

    return 0;
}