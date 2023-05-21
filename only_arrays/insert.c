#include <stdio.h>

void insertElement(int arr[], int size, int position, int element)
{
        // Shift elements to the right from the specified position
        for (int i = size - 1; i >= position; i--)
        {
                arr[i + 1] = arr[i];
        }

        // Insert the element at the specified position
        arr[position] = element;
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
        printf("Enter the position to insert the element: ");
        scanf("%d", &position);

        int element;
        printf("Enter the element to be inserted: ");
        scanf("%d", &element);

        insertElement(arr, size, position, element);

        displayArray(arr, size + 1);

        return 0;
}
