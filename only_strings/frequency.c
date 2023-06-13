#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: \n");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of %c = %d\n", ch, count);
    return 0;
}