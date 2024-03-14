#define MAXCOLUMNS 100
#define MAXROWS 100

void displayMatrix(int matrix[][MAXCOLUMNS], int rows, int columns);
void inputMatrix(int matrix[][MAXCOLUMNS], int rows, int columns, int matrixNum);
void findMaxPerRow(int matrix[][MAXCOLUMNS], int rows, int columns);
void printLLTriangle(int matrix[][MAXCOLUMNS], int rows, int columns);
void printURTriangle(int matrix[][MAXCOLUMNS], int rows, int columns);
void addMatrix(int M1[][MAXCOLUMNS], int M2[][MAXCOLUMNS], int R[][MAXCOLUMNS], int r, int c);
int sumSurrounding(int matrix[][MAXCOLUMNS], int rows, int columns, int i, int j);
