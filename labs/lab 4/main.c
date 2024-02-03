// Nelson Diaz

/*
Code asks user for 3 examn scores, applies percentage of each score,
adds them, then calculates the letter grade, and outputs this value.
Basically a grade calculator that takes in count how heavy the test
grades affect the final score out of a 100.
*/

// pre-processor directive
#include <stdio.h>
#include "main.h"

// driver function
int main(void)
{
    // initialize variables
    float finalScore;
    char grade;

    finalScore = getScore();

    grade = getLetterGrade(finalScore);
    
    printf("You got %c\n", grade);

    return 0;
}

// prompt user for scores, stores them, finds percentage of scores and adds them.
float getScore() 
{
    float exam1, exam2, exam3;

    printf("Enter scores for exam1, exam2, and exam3: ");
    scanf("%f %f %f", &exam1, &exam2, &exam3);
    
    float sum = 0.2*exam1 + 0.3*exam2 + 0.5*exam3;

    return sum;
}

// uses logic to find what letter grades goes with the getScore value. 
char getLetterGrade(float score)
{
    if(score >= 90)
        return 'A';
    else if(score >=80 && score < 90)
        return 'B';
    else if(score >= 70 && score < 80)
        return 'C';
    else if(score >= 60 && score < 70)
        return 'D';
    else   
        return 'F';
}