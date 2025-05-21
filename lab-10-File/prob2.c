#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input, *even, *odd;
    int num, count = 0;

    input = fopen("input.txt", "r");
    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if (input == NULL || even == NULL || odd == NULL) {
        printf("Error opening one of the files.\n");
        return 1;
    }

    printf("Data items in input file:\n");

    while (fscanf(input, "%d", &num) == 1 && count < 10) {
        printf("%d ", num);
        if (num % 2 == 0) {
            fprintf(even, "%d ", num);
        } else {
            fprintf(odd, "%d ", num);
        }
        count++;
    }

    printf("\nData items in even.txt file:\n");
    fclose(even);
    even = fopen("even.txt", "r");
    while (fscanf(even, "%d", &num) == 1) {
        printf("%d ", num);
    }

    printf("\nData items in odd.txt file:\n");
    fclose(odd);
    odd = fopen("odd.txt", "r");
    while (fscanf(odd, "%d", &num) == 1) {
        printf("%d ", num);
    }

    fclose(input);
    fclose(even);
    fclose(odd);

    return 0;
}

