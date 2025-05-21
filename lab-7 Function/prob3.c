#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++) {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers are: ", n);
    fibonacci(n);

    return 0;
}

