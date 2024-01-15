/*
Let us write a program that takes the radius of a circle and print the perimeter and area of the circle.
*/

// pre-processor directives
#include <stdio.h>

// Driver function (runs the whole code)
int main(void){

    float radius;
    float perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius); // Remmeber %f is for floats.
    perimeter = 2 * 3.14 * radius;
    printf("The perimeter is %f\n", perimeter);
    printf("The area is %f\n", 3.14 * radius * radius);


    return 0;

}