#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("Only alphabets: %s\n", result);

    return 0;
}

