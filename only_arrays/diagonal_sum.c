#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n, i, j, sum = 0;
        int **arr;

        printf("Enter the order of the matrix: ");
        scanf("%d", &n);

        arr = (int **)malloc(n * sizeof(int *));
        for (i = 0; i < n; i++)
        {
                arr[i] = (int *)malloc(n * sizeof(int));
        }

        printf("Enter the elements of the matrix:\n");
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < n; j++)
                {
                        printf("Enter element [%d][%d]:\n", i, j);
                        scanf("%d", &arr[i][j]);
                }
        }

        for (i = 0; i < n; i++)
        {
                sum += arr[i][i] + arr[i][n - i - 1];
        }

        printf("The sum of both diagonal elements is %d\n", sum);

        for (i = 0; i < n; i++)
        {
                free(arr[i]);
        }
        printf("\n");
        free(arr);

        return 0;
}