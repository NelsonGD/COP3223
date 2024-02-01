// Nelson Diaz

/*
Program takes three point(x1, y1), (x2, y2) and (x3, y3) as input 
and check if all three points fall on one straight line. Please 
use float data types for all the points.
*/

// pre-processor directive
#include <stdio.h>
#include <math.h>

// driver function
int main(void)
{
    // variable declaration
    float x1, y1, x2, y2, x3, y3, slope1, slope2;
    
    // prompt user for points
    printf("Enter coordinates (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    // calculating slopes
    slope1 = fabs((y2 - y1)/(x2 - x1));
    slope2 = fabs((y3 - y1)/(x3 - x1));

    // logic
    if(slope1 == slope2)
    {
        printf("They fall on one straight line\n");
    }
    else
        printf("They do not fall on one straight line\n");

    return 0;
}