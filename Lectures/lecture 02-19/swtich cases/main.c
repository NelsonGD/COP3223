// pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{
    int n;
    scanf("%d", &n);

    switch (n%2)
    {
    case 0:
        printf("Even");
        break;
    
    case 1:
        printf("ODD");
        break;
    }

    return 0;
}