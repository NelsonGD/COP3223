//pre-processor directive. Basically the library needed for input & output.
#include <stdio.h>

// driver function (run the whole code)
// Starts with int becuase it returns an int, explains return 0;
// VOID is not necessary but is good practice to include becuase not having it migth trigger some warnings.
int main(void){

    int a = 100;
    int b = 200;
    
    printf("Before swapping a is %d and b is %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After swapping a is %d and b is %d\n", a, b);

    return 0;
}