// Nelson Diaz

// pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{

    // variable declaration
    int x = 1, y = 2, z = 3;

    // output the value of x with pre/post increment operator with some operations in the mix.
    printf("\n%d %d %d", x, y, z);
    printf("\n%d %d %d", ++x, y++, z); 
    /*
    x will be added one before it's printed but y is added 1 after it's original value is printed. So the output shoudl be 2 2 3
    */ 
    printf("\n%d %d %d", x, y, z);

    // Remember that everytime you do this the value of x also changes, not only z. 
    z = ++x; 
    y = x++;
    // So now you have increased the value of x by 2. So x = 4 at the moment.

    printf("\n%d %d %d", x++, y, z);
    printf("\n%d %d %d", x, y, z);

    /*
    The value in line 19 is 2. Then we make z equal the value of x+1 before anything is printed. The value of y is in line 19 is 2. Then we make y equal the value of x+1 but this operation is applied after the first printf statement is executed.
    Output for line 24: 4 2 3
    Output for line 25: 5 3 3
    */
    
    return 0;
}