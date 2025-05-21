#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter the number to find the factorial: ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("The factorial of %d is %d\n", n, result);

    return 0;
}

