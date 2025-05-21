#include <stdio.h>

float findAverage(int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float avg = findAverage(arr, n);
    printf("Average = %.2f\n", avg);
    printf("Element   Difference from Average\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%.2f\n", arr[i], arr[i] - avg);
    }

    return 0;
}

