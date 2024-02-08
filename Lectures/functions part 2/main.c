#include <stdio.h>

void incby10(int a)
{
    a = a + 10;
}

int main(void)
{
    int a = 5;
    printf("Before incby10: %d\n", a);
    incby10(a); // call by value / pass by volume

    return 0;
}