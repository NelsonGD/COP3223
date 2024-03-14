void inputMatrix(int matrix[][MAXCOLUMNS], int rows, int columns)
{
    // Prompt user input for matrix elements
    printf("input for matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element for position (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}