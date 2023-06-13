#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
        int num1 = *(int *)a;
        int num2 = *(int *)b;
        return num1 - num2;
}

int main()
{
        int size;
        printf("Enter the size of the array: ");
        scanf("%d", &size);

        int arr[size];
        printf("Enter the elements of the array: ");
        for (int i = 0; i < size; i++)
        {
                scanf("%d", &arr[i]);
        }

        qsort(arr, size, sizeof(int), compare);

        printf("Sorted array: ");
        for (int i = 0; i < size; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
}
