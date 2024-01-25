#include <stdio.h>

int main(void)
{

    char victors_grade, adams_grade;
    printf("Enter the letter grade of Victor and Adam: ");
    scanf("%c %c", &victors_grade, &adams_grade);

    if(victors_grade > adams_grade) // B A
    {
        printf("Congratulations Adam\n");
        printf("Good luck Victor\n");
    }
    else if(adams_grade > victors_grade)
    {
        printf("Congratulations Victor\n");
        printf("Good luck Adam\n");
    }
    else //
    {
        printf("Both of you got the same grade\n");
    }

    return 0;
}