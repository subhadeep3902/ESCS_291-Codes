#include <stdio.h>

#define MAX_SIZE 10

int determinant(int matrix[][MAX_SIZE], int size)
{
        int det = 0;
        int submatrix[MAX_SIZE][MAX_SIZE];

        if (size == 2)
        {
                // Base case: 2x2 matrix
                det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        }
        else
        {
                for (int x = 0; x < size; x++)
                {
                        int sub_i = 0;
                        for (int i = 1; i < size; i++)
                        {
                                int sub_j = 0;
                                for (int j = 0; j < size; j++)
                                {
                                        if (j == x)
                                                continue;
                                        submatrix[sub_i][sub_j] = matrix[i][j];
                                        sub_j++;
                                }
                                sub_i++;
                        }
                        det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinant(submatrix, size - 1);
                }
        }
        return det;
}

int main()
{
        int size;
        printf("Enter the size of the square matrix (maximum %d): ", MAX_SIZE);
        scanf("%d", &size);

        if (size > MAX_SIZE)
        {
                printf("Invalid input! Size exceeds the maximum limit.\n");
                return 1; // Exit the program with an error code
        }

        int matrix[MAX_SIZE][MAX_SIZE];

        printf("Enter the elements of the square matrix:\n");
        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < size; j++)
                {
                        printf("Enter element at position (%d, %d): ", i, j);
                        scanf("%d", &matrix[i][j]);
                }
        }

        printf("Matrix:\n");
        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < size; j++)
                {
                        printf("%d ", matrix[i][j]);
                }
                printf("\n");
        }

        int det = determinant(matrix, size);

        printf("Determinant: %d\n", det);

        return 0;
}
