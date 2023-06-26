#include <stdio.h>

void merge(int *arr, int p, int q, int r)
{
        int n1 = p;
        int n2 = q + 1;
        int *buffer = (int *)malloc((r - p + 1) * sizeof(int));
        int t = 0;
        while (n1 <= q && n2 <= r)
        {
                if (arr[n1] < arr[n2])
                {
                        buffer[t++] = arr[n1++];
                }
                else
                {
                        buffer[t++] = arr[n2++];
                }
        }
        while (n1 <= q)
                buffer[t++] = arr[n1++];
        while (n2 <= r)
                buffer[t++] = arr[n2++];

        for (int i = p; i <= r; i++)
        {
                arr[i] = buffer[i - p];
        }
        free(buffer);
}

void mergeSort(int arr[], int left, int right)
{
        if (left < right)
        {
                int mid = left + (right - left) / 2;

                mergeSort(arr, left, mid);
                mergeSort(arr, mid + 1, right);

                merge(arr, left, mid, right);
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

        mergeSort(arr, 0, n - 1);

        printf("Array after sorting:\n");
        for (int i = 0; i < n; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
}
