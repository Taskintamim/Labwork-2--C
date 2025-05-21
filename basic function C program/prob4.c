#include <stdio.h>

void EvenOdd(int num)
{
    if (num % 2 == 0)
        printf("Output: Even\n");
    else
        printf("Output: Odd\n");
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    EvenOdd(n);
    return 0;
}

