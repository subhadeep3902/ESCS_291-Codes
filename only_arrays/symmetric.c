#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

bool isSymmetric(int matrix[][MAX_SIZE], int size)
{
        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < size; j++)
                {
                        if (matrix[i][j] != matrix[j][i])
                        {
                                return false; // Not symmetric
                        }
                }
        }
        return true; // Symmetric
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

        bool symmetric = isSymmetric(matrix, size);

        if (symmetric)
        {
                printf("The matrix is symmetric.\n");
        }
        else
        {
                printf("The matrix is not symmetric.\n");
        }

        return 0;
}
