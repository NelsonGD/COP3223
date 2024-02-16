#include <stdio.h>

int check(int);

int main()
{
    int i = 45, c;
    c = check(i);
    printf("%d %d", c, i);
    return 0;
}

int check(int i)
{
    i = 100;
    int c = 500;
    return c;
}
