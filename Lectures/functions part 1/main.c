#include <stdio.h>

int adam = 3000;

void f3()
{
    int ben, emil;
    adam = 4000;
}

void f2() // 
{   
    // THESE ARE ALL LOCAL VARIABLES
    // These are all local to f2
    int adam, ben;
    adam = 200;
    ben = 100;
} 
// After this closing bracket all of the functions get destroyed.

void f1()
{  
    // These variables are all local to f1
    int adam, bob, alex;
    adam = 500;

    // ben = 200; This line of code is not known by the function because the variable scope doesn't reach.
}

int main(void)
{
    // These variables are all local to main
    int ben, emil;
    ben = 600;

    printf("ben is main %d", adam); // This will print 3000 for adam
    f2();
    printf("Came back from f2, ben in main now %d", adam);
    f3();


    return 0;
}