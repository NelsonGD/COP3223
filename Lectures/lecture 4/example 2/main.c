// pre-processor directive
#include <stdio.h>

// driver function
int main(void)
{

    int score;
    scanf("%d", &score);

    if(score >= 70)
    {
        printf("Pass\n");
        printf("Congratulations\n");
    }
    else
    {
        printf("Fail\n");
        printf("Try again\n");
    }

    return 0;
}