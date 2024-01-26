// Nelson Diaz

// Pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{

    // Notice the value of x and how it interacts with printf statements

    // variable declaration
    int x = 10;

    // output the value of x
    printf("The value of x is %d\n", x);
    printf("The value of x is %d.\tThis statement added 10 to the value of x just for this instance.\n", x+10); // This adds 10 to the value of x
    printf("The value of x is %d.\tIt's still 10 becuase line 17 only adds 10 to x for that instance alone.\n", x);

    /*
    The value of x is still 10.
    Line 17 changes the value of x for that instance alone and that's it.
    */

   return 0;

}
