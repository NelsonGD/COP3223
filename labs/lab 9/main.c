// Nelson Diaz

/* Program will ask user to enter data for 2 matrices. Check if matrix multiplication is possible.
if it is, performs multiplicationi and print result. */ 

// pre-processor directive
#include <stdio.h>
#include "main.h"
// constants
#define COLUMNS 10

// Function prototypes
void FillData(int A[][COLUMNS], int r, int c);
void Display(int A[][COLUMNS], int r, int c);
void Multiply(int M1[][COLUMNS], int r1, int c1, int M2[][COLUMNS], int r2, int c2);


// driver function
int main(void)
{
    int matrix1 [ROWS][COLUMNS], matrix2 [ROWS][COLUMNS];
    int rows1, columns1, rows2, columns2, i, j;

    printf("Working for Matrix 1");
    printf("\nEtner number of rows and columns: ");
    scanf("%d %d", &rows1, &columns1);

    FillData(matrix1, rows1, columns1);

    printf("Working for Matrix 2");
    printf("\nEnter number of rows and columns: ");
    scanf("%d %d", &rows2, &columns2);

    FillData(matrix2, rows2, columns2);

    // print the matrices content
    printf("\nDisplaying Matrix 1: ");
    Display(matrix1, rows1, columns1);

    printf("\nDisplaying Matrix 2: ");
    Display(matrix2, rows2, columns2);

    Multiply(matrix1, rows1, columns1, matrix2, rows2, columns2);

    return 0;
}

// ADD COMMENT
void FillData(int A[][COLUMNS], int r, int c)
{

    int i, j;
    printf("Enter data for %dx%d matrix:\n", r, c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

}

void Display(int A[][COLUMNS], int r, int c)
{
    int i, j;
    printf("\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

// ADD COMMENT
void Multiply(int M1[][COLUMNS], int r1, int c1, int M2[][COLUMNS], int r2, int c2)
{
    int result[ROWS][COLUMNS]; // The dimension are always going to be THE ROWS OF MATRIX 1 & COLUMNS OF MATRIX 2

    /* If the number of columns of the first matrix is the same as the number of rows in the second matrix */
    if(c1 != r2)
    {
        printf("Not valid dimensions for multiplication");
        return;
    }

    int i, j, k;

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {   
            result[i][j] = 0;
            for(k = 0; k < c1; k++)
            {
                result[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    printf("\nDisplaying Result Matrix:");
    Display(result, r1, c2);
}