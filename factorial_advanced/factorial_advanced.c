//Proper factorial program from CHATGPT that is just perfect !!!

#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Error: factorial is not defined for negative numbers.\n");
        return 0;
    }
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        if (__builtin_umulll_overflow(fact, i, &fact)) {
            printf("Error: factorial of %d is too large to calculate.\n", n);
            return 0;
        }
    }
    return fact;
}

int main() {
    float f;
    printf("Enter an integer: ");
    if (scanf("%f", &f) != 1 || (int)f != f) {
        printf("Error: invalid input.\n");
        return 1;
    }
    int n = (int)f;
    unsigned long long fact = factorial(n);
    if (fact != 0) {
        printf("%d! = %llu\n", n, fact);
    }
    return 0;
}
