#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n1, n2, i;
        int *arr1, *arr2, *arr3;

        printf("Enter size of first array: ");
        scanf("%d", &n1);
        arr1 = (int *)malloc(n1 * sizeof(int));
        printf("Enter elements of first array: ");
        for (i = 0; i < n1; i++)
                scanf("%d", arr1 + i);

        printf("\nEnter size of second array: ");
        scanf("%d", &n2);
        arr2 = (int *)malloc(n2 * sizeof(int));
        printf("Enter elements of second array: ");
        for (i = 0; i < n2; i++)
                scanf("%d", arr2 + i);

        arr3 = (int *)malloc((n1 + n2) * sizeof(int));

        for (i = 0; i < n1; i++)
                *(arr3 + i) = *(arr1 + i);

        for (i = 0; i < n2; i++)
                *(arr3 + n1 + i) = *(arr2 + i);

        printf("\nMerged array is :");
        for (i = 0; i < n1 + n2; i++)
                printf("%d ", *(arr3 + i));
        printf("\n");
        return 0;
}