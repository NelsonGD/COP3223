#include <stdio.h>

long long function(int n);
long long power(int x, int y);

int main(void)
{
    int n;
    long double i;
    long long series = 0.0;
    
    printf("Enter you n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        series += power(i,i)/(long long)function(i);
    }
    
    printf("Summation of the series from 1 to %d is: %lld", n, series);
        
    return 0;
}


long long function(int n)
{
    long long factorial = 1.0;
    
    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    
    return factorial;
}

long long power(int x, int y)
{
    
    while(y > 0)
    {
        x *= x;   
    }
    
    return x;
}