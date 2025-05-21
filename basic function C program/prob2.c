#include <stdio.h>
int main()
{
    int n;
    printf("Enter any input : ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
void prime(int x)
{
    int i;
    for (i =2; i<= x/2; i++)
    {
        if (x%2==0)
            break;
    }
    if(i==x)
        printf("The number is Prime");
    else
        printf("The number is Prime");
}
