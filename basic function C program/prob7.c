#include <stdio.h>

float area(int radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);
    printf("Output: %.2f\n", area(r));
    return 0;
}

