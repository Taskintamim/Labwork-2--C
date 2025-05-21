#include <stdio.h>
#include <stdlib.h>

void sortDescending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    FILE *input, *output;
    int A[10];

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        fscanf(input, "%d", &A[i]);
    }
    fclose(input);

    sortDescending(A, 10);

    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    printf("Data items in input file:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }

    printf("\nData items in output file:\n");
    for (int i = 0; i < 10; i++) {
        fprintf(output, "%d ", A[i]);
        printf("%d ", A[i]);
    }

    fclose(output);
    return 0;
}

