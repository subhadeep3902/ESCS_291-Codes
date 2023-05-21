#include <stdio.h>

int findKthSmallest(int arr[], int size, int k)
{
        // Sort the array in ascending order
        for (int i = 0; i < size - 1; i++)
        {
                for (int j = 0; j < size - i - 1; j++)
                {
                        if (arr[j] > arr[j + 1])
                        {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }

        // Return the kth smallest number
        return arr[k - 1];
}

int main()
{
        int size;
        printf("Enter the size of the list: ");
        scanf("%d", &size);

        int arr[size];
        printf("Enter the numbers:\n");
        for (int i = 0; i < size; i++)
        {
                printf("Enter number at index %d: ", i);
                scanf("%d", &arr[i]);
        }

        int k;
        printf("Enter the value of k: ");
        scanf("%d", &k);

        int kthSmallest = findKthSmallest(arr, size, k);

        printf("The %dth smallest number is: %d\n", k, kthSmallest);

        return 0;
}
