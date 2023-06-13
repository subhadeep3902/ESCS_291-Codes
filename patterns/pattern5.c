#include <stdio.h>

void printArray(int *arr, int size, int cols) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%2d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int x = (n * 2) - 1;
    int arr[x][x];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            int minDist = (i < j) ? i : j;
            minDist = (minDist < x - i) ? minDist : x - i - 1;
            minDist = (minDist < x - j - 1) ? minDist : x - j - 1;
            arr[i][j] = n - minDist;
        }
    }

    printArray(&arr[0][0], x, x);

    return 0;
}
