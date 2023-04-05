// TO print first n terms of the fibonacci series (Limit 20)

#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1;
    int next;

    printf("Enter the value of n: ");

    while (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a positive integer: ");
        fflush(stdin);
    }

    if (n == 0) {
        printf("0 is not considered as a Fibonacci number\n");
        return 0;
    }

    if (n > 20) {
        printf("OVERFLOW : Limit is till 20\n");
        return 0;
    }

    printf("The first %d terms of the Fibonacci sequence are: \n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}
