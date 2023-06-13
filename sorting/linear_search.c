#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
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

        int target;
        printf("Enter the target value to search: ");
        scanf("%d", &target);

        int result = linearSearch(arr, n, target);

        if (result == -1)
        {
                printf("Target not found.\n");
        }
        else
        {
                printf("Target found at index %d.\n", result);
        }

        return 0;
}