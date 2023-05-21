#include <stdio.h>

void deleteElement(int arr[], int size, int position)
{
        // Shift elements to the left from the specified position
        for (int i = position; i < size - 1; i++)
        {
                arr[i] = arr[i + 1];
        }
}

void displayArray(const int arr[], int size)
{
        printf("Array: ");
        for (int i = 0; i < size; i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\n");
}

int main()
{
        int size;
        printf("Enter the size of the array: ");
        scanf("%d", &size);

        int arr[size];
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < size; i++)
        {
                printf("Enter element at index %d: ", i);
                scanf("%d", &arr[i]);
        }

        int position;
        printf("Enter the position of the element to be deleted: ");
        scanf("%d", &position);

        deleteElement(arr, size, position);

        displayArray(arr, size - 1);

        return 0;
}
