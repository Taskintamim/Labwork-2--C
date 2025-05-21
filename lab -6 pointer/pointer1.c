#include <stdio.h>

int main() {
    double d = 10.5;
    int i = 20;
    char str[] = "Pointer Lab";
    double *pd = &d;
    int *pi = &i;
    char *ps = str;
    printf("Double value: %.2lf\n", d);
    printf("Int value: %d\n", i);
    printf("String value: %s\n", str);
    printf("Address of double: %p\n", (void *)pd);
    printf("Address of int: %p\n", (void *)pi);
    printf("Address of string: %p\n", (void *)ps);

    return 0;
}

