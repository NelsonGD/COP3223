/*
Take the radius of a circle as input print the peremeter and area of the circle
*/

// pre-processor directive
#include <stdio.h>
#define PI 3.14 // Use all capitals when defining a constant. THIS IS STANDARD PRACTICE.

// driver function (runs code)
// The int means that the function will return an int (integer) or number at the end. WHich explains the return 0 at the end.
int main(void){

    float r, area, peremeter;

    scanf("%f", &r);

    // Another way of defining it a constant is to write const float PI = 3.14;

    // "=" -> It's an assignment operator.
    area = PI * r * r; 
    //Useing 3.14 is a magic number, because it has to be used in many places, it can bring problems, so make it a constant, as shown above.
    peremeter = 2 * 3.14 * r;

    printf("The area of a circle with radius %.2f is %.2f", r, area);
    /*
    Another way to do it, this one is without the use of variable area.
    printf("The area of a circle with radius %.2f is %.2f", r, 3.14 * r * r);
    */

    return 0;

}