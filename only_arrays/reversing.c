#include <stdio.h>

void reverseArray(int arr[], int size)
{
        int start = 0;
        int end = size - 1;

        while (start < end)
        {
                // Swap elements at start and end indices
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;

                // Move start index towards the center
                start++;

                // Move end index towards the center
                end--;
        }
}

int main()
{
        int arr[] = {10, 50, 90, 40, 41, 100};
        int size = sizeof(arr) / sizeof(arr[0]);

        printf("Original array: ");
        for (int i = 0; i < size; i++)
        {
                printf("%d ", arr[i]);
        }

        reverseArray(arr, size);

        printf("\nReversed array: ");
        for (int i = 0; i < size; i++)
        {
                printf("%d ", arr[i]);
        }

        return 0;
}
