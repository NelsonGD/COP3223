// pre-processor directive
#include <stdio.h>

// driver function (basically controls the whole code)
int main(void){

    int favNum;

    printf("Hello World!\n");
    printf("If I want to use tab then I just write \\t and it does it like this He\tllo.\n");
    printf("For next line then \\n and it does \n next line.\n");
    printf("Okey! Question for you now:\t What is your favorite number? ");

    scanf("%d\n", &favNum);
    
    printf("%d\n", &favNum);

}   