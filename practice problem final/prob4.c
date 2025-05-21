#include <stdio.h>

int main() {
    int temp[30];
    int hotDays = 0, coldDays = 0;
    float sum = 0;

    printf("Enter temperature for 30 days:\n");
    for (int i = 0; i < 30; i++) {
        scanf("%d", &temp[i]);
        sum += temp[i];

        if (temp[i] > 35) {
            hotDays++;
        } else if (temp[i] < 15) {
            coldDays++;
        }
    }

    printf("Average Temperature: %.2f°C\n", sum / 30);
    printf("Hot Days: %d\n", hotDays);
    printf("Cold Days: %d\n", coldDays);

    return 0;
}

