// Nelson Diaz

/*
code will simulate an odometer and fuel gauge of car. taking reference
to variables, storing odometer and fuel gauge reading, with double 
representingthe mpg. When no fuel left the program will let you know. 
*/

#include <stdio.h>

/*
Function updates odometer and fuel gauge of car. Takes refenrece to vairables
storing odometer and fuel gauge reading, double reps the mps. When mils > fuel
then functino stops
*/
void drive(double* odomPtr, double* fuelPtr, double mpg, double distance) {
    
    // variable declaration
    double maxDistance = *fuelPtr * mpg;

    // logic for updating values
    if (distance > maxDistance) {
        *odomPtr += maxDistance;
        *fuelPtr = 0;
    } else {
        *odomPtr += distance;
        *fuelPtr -= distance / mpg;
    }
}

int main() {
    
    // variable declaration
    double odometer, fuel, mpg;

    // getting user input
    printf("Enter odometer reading, fuel gauge reading and mpg: ");
    scanf("%lf %lf %lf", &odometer, &fuel, &mpg);

    // updating values
    double distance;
    while (fuel > 0) {
        printf("Enter the distance you want to drive: ");
        scanf("%lf", &distance);
        
        drive(&odometer, &fuel, mpg, distance);

        printf("Current reading odometer = %.2lf, fuel = %.2lf\n", odometer, fuel);
    }

    printf("No more fuel!\n");

    return 0;
}
