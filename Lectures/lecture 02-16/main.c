// pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{
    int n, sum = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &n);

        // Skips negative # from being added
        if(n <= 0)
            continue;

        sum += n;
    }

    printf("The sum of the positive numbers is %d\n", sum);

    return 0;
}