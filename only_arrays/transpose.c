#include <stdio.h>

void transposeMatrix(int matrix[][10], int rows, int cols)
{
        int i, j;
        int transposedMatrix[cols][rows]; // Transposed matrix with swapped dimensions

        // Transpose the matrix
        for (i = 0; i < rows; i++)
        {
                for (j = 0; j < cols; j++)
                {
                        transposedMatrix[j][i] = matrix[i][j];
                }
        }

        // Print the original matrix
        printf("Original Matrix:\n");
        for (i = 0; i < rows; i++)
        {
                for (j = 0; j < cols; j++)
                {
                        printf("%d ", matrix[i][j]);
                }
                printf("\n");
        }

        // Print the transposed matrix
        printf("Transposed Matrix:\n");
        for (i = 0; i < cols; i++)
        {
                for (j = 0; j < rows; j++)
                {
                        printf("%d ", transposedMatrix[i][j]);
                }
                printf("\n");
        }
}

int main()
{
        int rows, cols;
        printf("Enter the number of rows (maximum 10): ");
        scanf("%d", &rows);

        printf("Enter the number of columns (maximum 10): ");
        scanf("%d", &cols);

        if (rows > 10 || cols > 10)
        {
                printf("Invalid input! Number of rows and columns should be less than 10.\n");
                return 1; // Exit the program with an error code
        }

        int matrix[10][10]; // Maximum size of 10x10 matrix

        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < rows; i++)
        {
                for (int j = 0; j < cols; j++)
                {
                        printf("Enter element at position (%d, %d): ", i, j);
                        scanf("%d", &matrix[i][j]);
                }
        }

        transposeMatrix(matrix, rows, cols);

        return 0;
}
