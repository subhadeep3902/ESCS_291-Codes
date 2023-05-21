#include <stdio.h>

void countOccurrences(const int arr[], int size, int element)
{
        int count = 0;

        for (int i = 0; i < size; i++)
        {
                if (arr[i] == element)
                {
                        count++;
                }
        }

        printf("The occurrence of element %d is: %d\n", element, count);
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

        int element;
        printf("Enter the element to count its occurrence: ");
        scanf("%d", &element);

        countOccurrences(arr, size, element);

        return 0;
}
