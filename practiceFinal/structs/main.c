// pre-processor directive
#include <stdio.h>
#include <stdlib.h>

/*
Just going over creating structures

Here the compiles will allocate:
    - 50 char types, an int and a double for the person1 & 2 variables.

typedef
    - Reserved keyword used to simplify the syntax declaring struct variables.
*/


// Method 1
struct Person{
    char name[50];
    int age;
     double salary;
};

struct Person_V2{
    char name[50];
    int age;
    double salary;
} person1_V2, person2_V2; // create variables

// struct without typedef
struct Distance{
    int feet;
    double inch;
};

// struct with typedef
typedef struct Distance_typdef {
    int feet;
    double inch;
}distance;

// using pointer with struct
struct Employee {
    int age;
    float salary;
} person[20]; // address of first element is person

// driver function
int main(void)
{      
    // To access members of Employees
    // person -> salary ANOTHER EX: person -> age
    // To access address of members of Employees
    // &person -> age
    
    // person+1 is address of second element

    // struct with typedef 
    struct Distance_typdef d1, d2;

    // struct without typedef
    struct Distance d1, d2;

    // create variables for Method 1
    struct Person person1, person2;

    // Accessing the age member of the person1 variable
    // Assign 20 to person1's age
    person1.age = 20;

    // store string input in person1.name
    printf("Enter name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    printf("\n");

    // store int input in person1.age
    printf("Enter age: ");
    scanf("%d", &person1.age);

    printf("\n\n");
    printf("Name: %s", person1.name);
    printf("Age: %d", person1.age);
    printf("\n");

    return 0;
}

