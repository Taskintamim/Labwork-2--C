#include <stdio.h>

int main() {
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    printf("Enter 3 integers: ");
    scanf("%d %d %d", p1, p2, p3);

    int max = *p1;
    if (*p2 > max)
        max = *p2;
    if (*p3 > max)
        max = *p3;

    printf("Maximum value: %d\n", max);

    return 0;
}

