#include <stdio.h>
int main()
{
    int arr[100], n, i, j, k;
    printf("Enter size of the array : \n");
    scanf("%d", &n);
    printf("Enter elements in array : \n");

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : \n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements before deleting duplicates : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\nArray elements after deleting duplicates : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}