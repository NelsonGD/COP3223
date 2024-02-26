#include <stdio.h>
int f(int a, int b);

int main()
{
    int s = f(12, 14);
    printf("%d", s);
    return 0;
}

int f(int a, int b)
{
    int s = 0, i;
    for(i = a; i < b; i++)
        s += i;
    return s;
}