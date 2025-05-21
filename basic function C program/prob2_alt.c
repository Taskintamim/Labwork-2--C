#include <stdio.h>
int main()
{
    int n, j;
    printf("Enter any input : ");
    scanf("%d", &n);
    j = prime(n);
    if(j==n)
        printf("The number is Prime");
    else
        printf("The number is Prime and min factor %d", j);
}
int prime(int x)
{
    int i;
    for (i =2; i<x; i++)
    {
        if (x%i==0)
            break;
    }
    if (i==x)
        return 1;
    else
        return 0;

}

