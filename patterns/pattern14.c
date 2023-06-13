#include <stdio.h>

int main()
{
        int size;
        printf("Enter a number: ");
        scanf("%d", &size);

        // Upper part of the hourglass
        for (int i = 1; i <= size; i++)
        {
                for (int j = 1; j < i; j++)
                {
                        printf(" ");
                }
                for (int k = 1; k <= 2 * (size - i) + 1; k++)
                {
                        printf("*");
                }
                printf("\n");
        }

        // Lower part of the hourglass
        for (int i = size - 1; i >= 1; i--)
        {
                for (int j = 1; j < i; j++)
                {
                        printf(" ");
                }
                for (int k = 1; k <= 2 * (size - i) + 1; k++)
                {
                        printf("*");
                }
                printf("\n");
        }

        return 0;
}
