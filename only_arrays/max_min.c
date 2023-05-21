#include <stdio.h>

void findMaxMin(int matrix[3][3], int rows, int cols, int *max, int *min)
{
        *max = matrix[0][0];
        *min = matrix[0][0];

        for (int i = 0; i < rows; i++)
        {
                for (int j = 0; j < cols; j++)
                {
                        if (matrix[i][j] > *max)
                        {
                                *max = matrix[i][j];
                        }
                        if (matrix[i][j] < *min)
                        {
                                *min = matrix[i][j];
                        }
                }
        }
}

int main()
{
        int matrix[3][3];
        int max_element, min_element;

        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        printf("Enter element at position [%d][%d]: ", i, j);
                        scanf("%d", &matrix[i][j]);
                }
        }

        findMaxMin(matrix, 3, 3, &max_element, &min_element);

        printf("Maximum element: %d\n", max_element);
        printf("Minimum element: %d\n", min_element);

        return 0;
}
