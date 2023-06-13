#include <stdio.h>
int main()
{
        int a[100][100], b[100][100], sum[100][100], i, j, r1, r2, c1, c2;
        printf("Enter the number of rows and columns of the first matrix : \n");
        scanf("%d %d", &r1, &c1);
        printf("Enter the number of rows and columns of the second matrix : \n");
        scanf("%d %d", &r2, &c2);

        if (r1 != r2 || c1 != c2)
                printf("Number of corresponding rows and columns are not equal, so matrix addition is not possible!!\n");
        else
        {
                printf("Matrix addition is feasible\n");
                printf("Enter elements in the first matrix : \n");
                for (i = 0; i < r1; i++)
                {
                        for (j = 0; j < c1; j++)
                        {
                                printf("Enter element %d%d : \n", i, j);
                                scanf("%d", &a[i][j]);
                        }
                }

                printf("Enter elements in the second matrix : \n");
                for (i = 0; i < r2; i++)
                {
                        for (j = 0; j < c2; j++)
                        {
                                printf("Enter element %d%d : \n", i, j);
                                scanf("%d", &b[i][j]);
                        }
                }

                printf("The first matrix is : \n");
                for (i = 0; i < r1; i++)
                {
                        for (j = 0; j < c1; j++)
                                printf("%3d", a[i][j]);
                        printf("\n");
                }

                printf("The second matrix is : \n");
                for (i = 0; i < r2; i++)
                {
                        for (j = 0; j < c2; j++)
                                printf("%3d", b[i][j]);
                        printf("\n");
                }

                for (i = 0; i < r1; i++)
                {
                        for (j = 0; j < c1; j++)
                                sum[i][j] = a[i][j] + b[i][j];
                }

                printf("The added matrix is : \n");
                for (i = 0; i < r1; i++)
                {
                        for (j = 0; j < c1; j++)
                                printf("%3d", sum[i][j]);
                        printf("\n");
                }
        }

        return 0;
}