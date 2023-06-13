#include <stdio.h>

int main()
{
        int size;
        printf("Enter size: ");
        scanf("%d", &size);

        for (int i = 0; i <= size; i++)
        {
                for (int j = 0; j < i; j++)
                {
                        printf(" ");
                }
                for (int k = i; k <= size; k++)
                {
                        printf("* ");
                }
                for (int j = 0; j < 2 * i; j++)
                {
                        printf(" ");
                }
                for (int k = i; k <= size; k++)
                {
                        printf("* ");
                }
                printf("\n");
        }

        for (int i = size - 1; i >= 0; i--)
        {
                for (int j = 0; j < i; j++)
                {
                        printf(" ");
                }
                for (int k = i; k <= size; k++)
                {
                        printf("* ");
                }
                for (int j = 0; j < 2 * i; j++)
                {
                        printf(" ");
                }
                for (int k = i; k <= size; k++)
                {
                        printf("* ");
                }
                printf("\n");
        }

        return 0;
}
