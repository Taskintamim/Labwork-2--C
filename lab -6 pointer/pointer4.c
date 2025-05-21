#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;
    int sum = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
        sum += *(p + i);
    }

    float mean = sum / 5.0;
    printf("Average (Mean): %.2f\n", mean);

    printf("Differences from Mean:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element: %d, Difference: %.2f\n", *(p + i), *(p + i) - mean);
    }

    return 0;
}
