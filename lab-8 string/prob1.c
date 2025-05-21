#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("You entered:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    return 0;
}

