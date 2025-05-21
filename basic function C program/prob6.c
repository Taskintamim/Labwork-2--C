#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int main()
{
    int x, y;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &y);
    printf("Output: %d\n", power(x, y));
    return 0;
}

