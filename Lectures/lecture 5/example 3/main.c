// Nelson Diaz

/*
SIMPLE motor insurance company insures a driver in the following
cases:
– If the driver is married
– If the driver is unmarried, male and above 30 years of age
– If the driver is unmarried, female and above 25 years of age.
*/

// pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{

    // variable declaration
    char ms, gender;
    int age;

    //prompt user for values
    printf("Enter marital statys (m/u), gender (m/f), and age: ");
    scanf("%c %c %d", &ms, &gender, &age);

    // logic
    // if(ms == 'm')
    //     printf("You are eligible!!!\n");
    // else if(ms == 'u' && gender == 'm' && age > 30)
    //     printf("You are elegible!!!\n");
    // else if(ms == 'u' && gender == 'f' && age > 25)
    //     printf("You are elegible!!!\n");


    // You can combine everything from before like this
    if(ms == 'm' || ms == 'u' && gender == 'm' && age > 30 || ms == 'u' && gender == 'm' && age > 30)
        printf("You are eligible!!!\n");
    else
        printf("Sorry you are not eligible\n");

    return 0;
}