#include <stdio.h>

void printMatrix(int matrix[][3], int rows, int cols)
{
        printf("Matrix:\n");
        for (int i = 0; i < rows; i++)
        {
                for (int j = 0; j < cols; j++)
                {
                        printf("%d ", matrix[i][j]);
                }
                printf("\n");
        }
}

void transposeMatrix(int matrix[][3], int rows, int cols, int result[][3])
{
        for (int i = 0; i < rows; i++)
        {
                for (int j = 0; j < cols; j++)
                {
                        result[j][i] = matrix[i][j];
                }
        }
}

int main()
{
        int matrix[3][3];
        int transpose[3][3];

        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        printf("Enter element at position [%d][%d]: ", i, j);
                        scanf("%d", &matrix[i][j]);
                }
        }

        printMatrix(matrix, 3, 3);

        transposeMatrix(matrix, 3, 3, transpose);

        printf("\nTranspose Matrix:\n");
        printMatrix(transpose, 3, 3);

        return 0;
}
