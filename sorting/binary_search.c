#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target)
{
        while (left <= right)
        {
                int mid = left + (right - left) / 2;

                if (arr[mid] == target)
                {
                        return mid; // Target found at index mid
                }

                if (arr[mid] < target)
                {
                        left = mid + 1; // Target is in the right half
                }
                else
                {
                        right = mid - 1; // Target is in the left half
                }
        }

        return -1; // Target not found
}


int main()
{
        int n;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter the elements of the array in sorted order:\n");
        for (int i = 0; i < n; i++)
        {
                scanf("%d", &arr[i]);
        }

        int target;
        printf("Enter the target value to search: ");
        scanf("%d", &target);

        int result = binarySearch(arr, 0, n - 1, target);

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
