#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int number) {
    int originalNumber = number;
    int numDigits = 0;
    int sum = 0;

    while (originalNumber != 0) {
        originalNumber /= 10;
        numDigits++;
    }
    
    originalNumber = number;
    

    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += pow(digit, numDigits);
        originalNumber /= 10;
    }

    if (sum == number) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isArmstrongNumber(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}
