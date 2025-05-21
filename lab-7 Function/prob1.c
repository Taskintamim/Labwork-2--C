#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return i;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int result = isPrime(n);
    if (result == 1)
        printf("Prime\n");
    else {
        printf("Not Prime\n");
        printf("Minimum factor is %d\n", result);
    }

    return 0;
}

