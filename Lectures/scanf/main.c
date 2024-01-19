// pre-processor directives
#include <stdio.h>

// Driver function (controls the whole code)
int main(void){

    int basic_sal, commission;
    int total_sal;
    printf("Enter the basic salary and the commission: ");
    scanf("%d %d", &basic_sal, &commission); // single-line version.
    // scanf("%d", &basic_sal);
    // scanf("%d", &commission);

    total_sal = basic_sal + commission;

    printf("The basic is %d, the commission is %d, the total is %d\n", basic_sal, commission, total_sal);
 
    return 0;

}