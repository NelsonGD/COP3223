// Nelson Diaz

// pre-processor directive
#include <stdio.h>

// driver function
int main(void){

    // Notice how the value of x changes depending on where the lines are:
    int x = 5;

    // x = x + 10; // This is just one way to do it.
    printf("x is %d\n", x + 10); 

    // x += 20; // This will make the value of x increase to 25 and print that out only later.
    printf("x is %d\n", x);

    x++;
    printf("x is %d\n", x);

    ++x;
    printf("x is %d\n", x);

    printf("x is %d\n", x++); // Does the addition after the line is executed.
    printf("x is %d\n", ++x); // Does the addition before the line is executed.

    int a = 0, b = 0, c = 0;

    printf("Value equals is %d %d %d\n", a, b, c);
    ++a;
    a++;
    printf("Value equals is %d %d %d\n", a, b, c); // Does operation before exectuing line.
    printf("Value equals is %d %d %d\n", ++a, b, c); // Does operation after executing line.
    printf("Value equals is %d %d %d\n", a++, b, c);
    printf("Value equals is %d %d %d\n", a, b, c);


    b = ++a;
    c = a++;

    printf("Value equals is %d %d %d\n", a, b, c);
    printf("Value equals is %d %d %d\n", a, b++, ++c);
    printf("Value equals is %d %d %d\n", a, b, c);


    return 0;
}