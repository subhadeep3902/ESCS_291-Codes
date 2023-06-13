#include <stdio.h>

int main()
{
        int num;
        printf("\n Enter the number : ");
        scanf("%d", &num);

        if (num % 2 == 0)
                printf("\n The number %d is even", num);
        else
                printf("\n The number %d is odd", num);

        return 0;
}
