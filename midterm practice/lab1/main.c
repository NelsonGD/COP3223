// Nelson Diaz

/*
Code takes 5 inputs, find the sum of all, and the average.
*/

// pre-processor directive
#include <stdio.h>

// driver function
int main() {
    
    // variable declaration
    int size = 5.0;
    float scores[size], totalScore, avgScore = 0;
    
    printf("Enter the scores for 5 subjects separated by space: ");
    scanf("%f %f %f %f %f", &scores[0], &scores[1], &scores[2], &scores[3], &scores[4]);
    
    for(int i = 0; i < size; i++){
        printf("Score %d = %.2f\n", i+1, scores[i]);
        avgScore += scores[i];
        totalScore += scores[i];
    }
    printf("Total score is: %.2f\n", totalScore);
    
    avgScore = avgScore / size;
    printf("Percentage: %.2f\n", avgScore);

    return 0;
}