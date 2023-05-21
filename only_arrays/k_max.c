#include <stdio.h>

int findKthLargest(int arr[], int size, int k)
{
        // Sort the array in descending order using bubble sort
        for (int i = 0; i < size - 1; i++)
        {
                for (int j = 0; j < size - i - 1; j++)
                {
                        if (arr[j] < arr[j + 1])
                        {
                                // Swap elements
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }

        // Return the kth largest number
        return arr[k - 1];
}

int main()
{
        int size;
        printf("Enter the size of the list: ");
        scanf("%d", &size);

        int arr[size];
        printf("Enter the numbers in the list:\n");
        for (int i = 0; i < size; i++)
        {
                printf("Enter element at index %d: ", i);
                scanf("%d", &arr[i]);
        }

        int k;
        printf("Enter the value of k: ");
        scanf("%d", &k);

        int kthLargest = findKthLargest(arr, size, k);

        printf("The %dth largest number is: %d\n", k, kthLargest);

        return 0;
}
