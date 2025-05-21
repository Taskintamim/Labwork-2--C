#include <stdio.h>

int main() {
    int sales[3][7];
    int weekTotal[3] = {0};
    int maxSale = 0, bestWeek = 0;

    printf("Enter sales for 3 weeks (7 days each):\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            scanf("%d", &sales[i][j]);
            weekTotal[i] += sales[i][j];
            if (sales[i][j] > maxSale) {
                maxSale = sales[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("Week %d Total: %d\n", i + 1, weekTotal[i]);
        if (weekTotal[i] > weekTotal[bestWeek]) {
            bestWeek = i;
        }
    }

    printf("Highest Sale: %d\n", maxSale);
    printf("Best Week: Week %d\n", bestWeek + 1);

    return 0;
}

