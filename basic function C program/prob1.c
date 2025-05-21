#include<stdio.h>
int main()
{
    int x,y,min, max;
    printf("Enter 2 number=");
    scanf("%d %d", &x, &y);
    min = minimum(x,y);
    max = maximum(x,y);
    printf("Minimum=%d\n",min);
    printf("Maximum=%d\n",max);
}
int minimum(int a, int b)
{
    int i;
    if(a<b)
        i =a;
    else
        i=b;
    return i;
}
int maximum(int c, int d)
{
    int i;
    if(c>d)
        return c;
    else
        return d;
}

