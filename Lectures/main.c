// pre-processor directives
#include <stdio.h>

// Driver function (controls the whole code)
int main(void){

    int basic_sal, commission;
    int total_sal;
    
    basic_sal = 500; // This changed the value from a random number to 0.
    // = is called assignment operator.
    // it copies the right side's data into the box in the left side.
    commission = 50;
    total_sal = basic_sal + commission;
    printf("The basic is %d, the commission is %d, the total is %d\n", basic_sal, commission, total_sal);

    /*
    Another option is to do put the operation directly into the printf
    printf("The basic is %d, the commission is %d, the total is %d\n", basic_sal, commission, basic_sal + commission);
    */

    /*
    Format specifier
    %, %X, %u for address
    %d int
    %f float
    %c char
    %lu unsigned long int
    %lf double
    */
    
    printf("Address of basic_sal is %p\n", &basic_sal); // %p is used to see the address, after that goes the variable name.
    printf("Value of basic_sal is %d\n", basic_sal); // If you want to see an integer then you have to write %d. It will show a random number for this becuase we didn't declare it, so GARBAGE value.
    printf("The size of basic_sal is %lu\n", sizeof(basic_sal)); // To see the size of a variable then you use %lu. After you type sizeof( variable name )
 
    return 0;

}