#include <stdio.h>

int main() {
    float price[5];
    int quantity[5];
    float totalValue = 0;

    printf("Enter prices: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &price[i]);
    }

    printf("Enter stock quantities: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &quantity[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (quantity[i] == 0) {
            printf("Item %d: Out of stock\n", i + 1);
        } else {
            float value = price[i] * quantity[i];
            printf("Item %d: Value = %.0f\n", i + 1, value);
            totalValue += value;
        }
    }

    printf("Total Inventory Value = %.0f\n", totalValue);

    return 0;
}

