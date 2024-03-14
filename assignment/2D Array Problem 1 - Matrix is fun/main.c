// Nelson Diaz

/*  */

// pre-processor directive
#include <stdio.h>

#define MAXCOLUMNS 100
#define MAXROWS 100

// functions
void displayMatrix(int matrix[][MAXCOLUMNS], int rows, int columns)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");  // Move to the next line after each row
    }
}

void inputMatrix(int matrix[][MAXCOLUMNS], int rows, int columns, int matrixNum)
{
    // prompt user input for matrices
    printf("Input for matrix %d:\n", matrixNum);
    for (int i = 0; i < rows; i++) {
        printf("data for matrix%d[%d][0] to matrix%d[%d][%d] ", matrixNum, i, matrixNum, i, columns - 1);
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void findMaxPerRow(int matrix[][MAXCOLUMNS], int rows, int columns)
{
    printf("printing max per row for matrix 1:\n");
    // iterate over each row
    for (int i = 0; i < rows; i++) {
        int max = matrix[i][0];
        // iterate over each column in the current row
        for (int j = 1; j < columns; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("max of row %d is %d", i, max);
    }
    printf("\n");
}

void printLLTriangle(int matrix[][MAXCOLUMNS], int rows, int columns)
{
 printf("printing lower left triangle of matrix 1:\n");
    // Iterate over each row
    for (int i = 0; i < rows; i++) {
        // tterate over each column
        for (int j = 0; j < columns; j++) {
            // print lower-left elements for triangle
            if (j <= i) {
                printf("%4d", matrix[i][j]);
            } else {
                // print zeros  outside the lower-left triangle
                printf("%4d", 0);
            }
        }
        printf("\n");
    }
}
void printURTriangle(int matrix[][MAXCOLUMNS], int rows, int columns)
{
    printf("printing upper right triangle for matrix 1:\n");
    // iterate over each row
    for (int i = 0; i < rows; i++) {
        // iterate over each column
        for (int j = 0; j < columns; j++) {
            // print upper-right elements for triangle
            if (j >= i) {
                printf("%4d", matrix[i][j]);
            } else {
                // print zero for elements outside upper right triangle
                printf("%4d", 0);
            }
        }
        printf("\n");
    }
}

void addMatrix(int M1[][MAXCOLUMNS], int M2[][MAXCOLUMNS], int R[][MAXCOLUMNS], int r, int c)
{
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            R[i][j] = M1[i][j] + M2[i][j];
        }
    }
}

int sumSurrounding(int matrix[][MAXCOLUMNS], int rows, int columns, int i, int j)
{
    int sum = 0;
    // iterate over the surrounding elements
    for (int x = i - 1; x <= i + 1; x++) {
        for (int y = j - 1; y <= j + 1; y++) {
            // check if the surrounding element is within bounds
            if (x >= 0 && x < rows && y >= 0 && y < columns) {
                // add the value of the surrounding element to the sum
                sum += matrix[x][y];
            }
        }
    }
    // leaving out the central element
    sum -= matrix[i][j];
    return sum;
}


// driver function
int main(void)
{
    // variable declaration
    int rows, columns;
    int M1[MAXCOLUMNS][MAXCOLUMNS], M2[MAXCOLUMNS][MAXCOLUMNS], R[MAXCOLUMNS][MAXCOLUMNS];

    // prompt user input
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    // Calling inputMatrix function to get input for matrices
    inputMatrix(M1, rows, columns, 1);
    inputMatrix(M2, rows, columns, 2);

    // displaying matrices with displayMatrix function
    printf("\nprinting matrix 1:\n");
    displayMatrix(M1, rows, columns);
    
    printf("\nprinting matrix 2:\n");
    displayMatrix(M2, rows, columns);

    // Showing max number per row of Matrix 1
    findMaxPerRow(M1, rows, columns);

    // outputting LL triangle
    printLLTriangle(M1, rows, columns);

    // outputting UR triangle
    printURTriangle(M1, rows, columns);

    // calling addMatrix fxn and adding functions 1 and 2
    addMatrix(M1, M2, R, rows, columns);

    // diplsaying the addition of both matrices
    printf("\nMatrix 1 + Matrix 2 is:\n");
    displayMatrix(R, rows, columns);

    // loop for calculating sum of surrounding
    while (1) {
        int i, j;
        printf("\nEnter i and j for calculating sum of surrounding: ");
        scanf("%d %d", &i, &j);
        
        if (i < 0 || j < 0) {
            printf("Exit\n");
            break;
        }

        printf("sum of surrounding is %d\n", sumSurrounding(M1, rows, columns, i, j));
    }

    return 0;
}