#include <stdio.h>

int reverseNumber(int num)
{
    int reverse = 0;
    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return reverse;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Output: %d\n", reverseNumber(n));
    return 0;
}

