#include <stdio.h>

int sumPositive(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    printf("Input data size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Input data: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sumPositive(arr, size);
    printf("Sum of positive numbers: %d\n", result);

    return 0;
}

