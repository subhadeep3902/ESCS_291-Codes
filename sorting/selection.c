#include <stdio.h>

void selectionSort(int arr[], int n)
{
        for (int i = 0; i < n - 1; i++)
        {
                int minIndex = i;
                for (int j = i + 1; j < n; j++)
                {
                        if (arr[j] < arr[minIndex])
                        {
                                minIndex = j;
                        }
                }
                // Swap arr[i] with the minimum element
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
        }
}

int main()
{
        int n;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < n; i++)
        {
                scanf("%d", &arr[i]);
        }

        printf("Array before sorting:\n");
        for (int i = 0; i < n; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");

        selectionSort(arr, n);

        printf("Array after sorting:\n");
        for (int i = 0; i < n; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
}
