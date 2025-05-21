#include <stdio.h>

int main() {
    int arr[1][100];
    int n, i;

    printf("Input number of elements in the array: ");
    scanf("%d", &n);
    printf("Input values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[0][i]);
    }
    int smallest = arr[0][0];
    for (i = 1; i < n; i++) {
        if (arr[0][i] < smallest) {
            smallest = arr[0][i];
        }
    }

    printf("The SMALLEST value is: %d\n", smallest);


    int fib[1][100];
    int count;
    printf("How many Fobonacci numbers you want to generate: ");
    scanf("%d", &count);

    fib[0][0] = 0;
    fib[0][1] = 1;
    for (i = 2; i < count; i++) {
        fib[0][i] = fib[0][i - 1] + fib[0][i - 2];
    }

    printf("The series is: ");
    for (i = 0; i < count; i++) {
        printf("%d ", fib[0][i]);
    }
    printf("\n");


    int A[3][3], B[3][3], C[3][3];
    int j, k;

    printf("\nInput matrix A:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    printf("Input matrix B:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    // Multiply A x B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("A X B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

