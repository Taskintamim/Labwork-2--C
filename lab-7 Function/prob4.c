#include <stdio.h>

float calculateZ(int x, int y) {
    if (x > y)
        return (x - y) * (x - y);
    else if (x < y)
        return (x + y) / 4.0;
    else
        return (x + y) / 3.0;
}

int main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    float z = calculateZ(x, y);
    printf("Value of z is: %.2f\n", z);

    return 0;
}

