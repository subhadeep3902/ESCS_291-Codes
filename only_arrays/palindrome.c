#include <stdio.h>

int isPalindrome(int arr[], int size)
{
        int i, j;
        for (i = 0, j = size - 1; i < j; i++, j--)
        {
                if (arr[i] != arr[j])
                {
                        return 0; // Array is not a palindrome
                }
        }
        return 1; // Array is a palindrome
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

        int palindrome = isPalindrome(arr, size);

        if (palindrome)
        {
                printf("The array is a palindrome.\n");
        }
        else
        {
                printf("The array is not a palindrome.\n");
        }

        return 0;
}
