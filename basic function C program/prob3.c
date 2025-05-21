#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n",n, factorial(n));
    return 0;

}
int factorial(int n)
{
    int fact =1;
    for(int i = 1; i <=n; i++)
    {
        fact *= i;
    }

    return fact;
}


